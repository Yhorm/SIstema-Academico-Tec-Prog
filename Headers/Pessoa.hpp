#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;


class Pessoa {
    private:
        int pDia, pMes, pAno, pIdade;
        string nome;

    public:
        Pessoa(int dNasc, int mNasc, int aNasc, string nomeP);
        void calcula_idade();
        const int getAge() { return pIdade; } ;
        void printAge() { cout << "A pessoa " << nome << " tem "<< pIdade << " anos.\n"; };


};



