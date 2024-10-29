#include "Headers/Principal.hpp"

Principal::Principal() 
{
	
	idDpto = 1;
	idUniv = 1;

}

Principal::~Principal()
{
}

void Principal::executar()
{
	Newton.Inicializa(4, 1, 1643, "Newton");
	Felipe.Inicializa(9, 8, 2002, "Felipe");
	Einstein.Inicializa(14, 3, 1879, "Einstein");
	Liane.Inicializa(22, 1, 1947, "Liane Tarouco");
	
	Einstein.printAge();
    Newton.printAge();
	Felipe.printAge();
	Liane.printAge();
}