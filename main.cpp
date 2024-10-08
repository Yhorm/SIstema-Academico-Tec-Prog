#include <stdio.h>
#include <iostream>
#include "Headers/Pessoa.hpp"



int main()
{

	Pessoa Newton(4, 1, 1643, "Newton");
	Pessoa Einstein(14, 3, 1879, "Einstein");
	Pessoa Felipe(9, 8, 2002, "Felipe");
	Pessoa Liane(22, 1, 1947, "Liane Tarouco");

	Einstein.calcula_idade();
	Newton.calcula_idade();
	Felipe.calcula_idade();
	Liane.calcula_idade();

	Einstein.printAge();
    	Newton.printAge();
	Felipe.printAge();
	Liane.printAge();


	getchar();
	return 0;
}


