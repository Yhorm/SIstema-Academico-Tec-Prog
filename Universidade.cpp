#include "Headers/Universidade.hpp"


Universidade::Universidade(const int i, const std::string n) :
    ID(i), 
    nome(n), 
    qtdAlunos(0),
    qtdProfessores(0),
    qtdDptos(0)
{
}

Universidade::~Universidade()
{
    depList.limpaLista();
}