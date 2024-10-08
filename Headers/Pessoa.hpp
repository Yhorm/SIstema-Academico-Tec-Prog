#include <stdio.h>
#include <iostream>
#include <string>

#pragma once


class Pessoa {
    private:
        int pDia, pMes, pAno, pIdade;
	std::string nome;

    public:

        Pessoa(int dNasc, 
		int mNasc,
		int aNasc,
		std::string nomeP);

	Pessoa();
       
	void Inicializa(int d = -1, int m = -1, int a = -1, std::string n = "");

	void setBDay(const int d) { pDia = d; calcula_idade(); } ;
	void setBMonth(const int m) { pMes = m; calcula_idade(); } ;	
	void setBYear(const int y) { pAno = y; calcula_idade(); } ;

	const int getBDay() { return pDia ;};
	const int getBMonth() { return pMes; };
	const int getBYear() { return pAno; };

	void calcula_idade();
        const int getAge() { return pIdade; } ;
	void printAge() { std::cout << "A pessoa " << nome << " tem "<< pIdade << " anos.\n"; };

	const std::string getName() { return nome; };

};



