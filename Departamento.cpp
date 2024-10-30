#include "Headers/Departamento.hpp"

#include "Headers/Universidade.hpp"

class Universidade;

Departamento::Departamento(const int i, std::string n) :
    pUnivAssoc(NULL), ID(i), nome(n)
{
    
}

Departamento::~Departamento()
{
    pUnivAssoc = NULL;
}

void Departamento::setUnivAssoc(Universidade* univCad)
{
    if(univCad == NULL)
    {
        std::cout << "ERRO AO ADICIONAR PONTEIRO NULO" << std::endl;
    }

    pUnivAssoc = univCad;
}

