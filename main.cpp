#include <stdio.h>
#include <iostream>
#include "Headers/Pessoa.hpp"

using namespace std;


int main()
{

    Pessoa Newton(4, 1, 1643, "Newton");
    Pessoa Einstein(14, 3, 1879, "Einstein");

    Einstein.calcula_idade();
    Newton.calcula_idade();

    Einstein.printAge();
    Newton.printAge();

    getchar();
    return 0;
}


