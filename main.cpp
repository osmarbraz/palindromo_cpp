//Declaração de bibliotecas
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/**
 * Verifica se uma palavra é palindromo.
 *
 * @param palavra Palavra a ser verifica.
 * @return Retorna verdadeiro ou falso se a palavra é palindromo.
 */
bool ePalindromo(string palavra) {
    //Adiciona um terminador na palavra
    palavra = palavra + "$";

    //Descubro a quantidade de letras na palavra percorrento até o terminador
    int tamanho = 0;
    while (palavra[tamanho] != '$') {
        tamanho = tamanho + 1;
    }
    //Referência ao fim da palavra
    int fim = tamanho - 1;
    //Meio da palavra
    int meio = tamanho / 2;
    //Referência ao início da palavra
    int inicio = 0;
    //Percorre do início até o meio da palavra e verifica se as letras são iguais.
    while ((inicio < meio) && (palavra[inicio] == palavra[fim])) {
        //Incrementa o inicio
        inicio = inicio + 1;
        //Decrementa o fim
        fim = fim - 1;
    }
    //Se início é igual ao meio, todas as comparações são verdadeiras.
    //Pode ser usado tanto o inicio como o fim.
    if (inicio == meio) {
        return true;
    } else {
        return false;
    }
}

/*
 * Programa principal
 */
int main(int argc, char** argv) {
    //Entrada        
    string palavra = "";
    cout << "Digite uma palavra para verificar se é palindromo:";
    cin >> palavra;

    //Processamento
    if (ePalindromo(palavra)) {
        //Saida
        cout << "\nA palavra " << palavra << " é palindromo!" << endl;
    } else {
        //Saida
        cout << "\nA palavra " << palavra << " não é palindromo!" << endl;
    }
    return 0;
}