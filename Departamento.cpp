#include "Headers/Departamento.hpp"

#include "Headers/Universidade.hpp"

class Universidade;

Departamento::Departamento(const int i) :
    pUniv(NULL), ID(i)
{
}

Departamento::~Departamento()
{
    pUniv = NULL;
}

void Departamento::setUniv(Universidade* univCad)
{
    if(univCad == NULL)
    {
        std::cout << "ERRO AO ADICIONAR PONTEIRO NULO" << std::endl;
    }

    pUniv = univCad;
}

