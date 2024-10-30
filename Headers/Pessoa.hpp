#include <stdio.h>
#include <iostream>
#include <string>

#include "Universidade.hpp"


#pragma once


class Pessoa {
    private:
        int pDia, pMes, pAno, pIdade;
		std::string nome;

		Universidade* uniAfiliado;
		Departamento* depAfiliado;

    public:
	Pessoa(int dNasc = -1, int mNasc = -1, int aNasc = -1, std::string nomeP = " ");
	
    ~Pessoa();
	
	
	void Inicializa();

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
	void setName(const std::string n) { nome = n; };

	const Universidade* getUniAfiliado() { return uniAfiliado; };
	void setUniAfiliado(Universidade* u);

	const Departamento* getDptoAfiliado() { return depAfiliado; };
	void setDptoAfiliado(Departamento* d);

	void printAfiliacao();
};



