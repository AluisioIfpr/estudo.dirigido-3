#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>
using namespace std;

void Megasena (int NumeroAleatorio[15], int NumerosJogados){
    for (int i = 0; i <= NumerosJogados; i++){                   //Linhas 8 e 9 servem para gerar um numero aleatorio
        NumeroAleatorio[i] = rand()% 60 + 1;
        repetir:
        if (NumeroAleatorio[i] == NumeroAleatorio[i]){ // Linhas 11, 12 servem para checar se o numero é repetido e gerar um novo
            NumeroAleatorio[i] = rand()% 60 + 1;
            goto repetir;  // Linha 13 volta para a linha 10 para checar denovo, caso gere outro numero repetido, sera trocado novamente e assim até que nao seja mais.
        }

    }
    for (int i = 0; i <=NumerosJogados; i++){
        cout << NumeroAleatorio[i] << " ";
    }


    }




int main(){
    int NumeroAleatorio[15], NumerosJogados;
    setlocale(LC_ALL, "Portuguese");
    cout << "Digite Quantos Numeros deseja jogar" << endl;
    cin >> NumerosJogados;
    Megasena(NumeroAleatorio, NumerosJogados);







    return 0;
}
