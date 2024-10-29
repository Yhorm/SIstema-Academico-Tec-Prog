#include "Headers/Pessoa.hpp"
#include <ctime>

Pessoa::Pessoa(int dNasc, int mNasc, int aNasc, std::string nomeP) :
pDia(dNasc), 
pMes(mNasc), 
pAno(aNasc),
nome(nomeP),
pIdade(-1)
{
    Inicializa();
}



Pessoa::~Pessoa()
{
}

void Pessoa::Inicializa()
{
    calcula_idade();
}

void Pessoa::calcula_idade()
{
    time_t agora = time(NULL);
    tm data = *localtime(&agora);

    pIdade =  (data.tm_year + 1900) - pAno;

    if(pMes > (data.tm_mon+1))
    {
        pIdade-= 1;
    }
    else if (pMes == (data.tm_mon+1))
    {
        if(pDia >= (data.tm_mday))
        {
            pIdade-= 1;
        }
    }
}

void Pessoa::setMatricula(Universidade* u)
{
    if(u == NULL)
    {
        std::cout << "Erro ao matricular aluno em universidade nula" << std::endl;
    }

    MatriculadoEm = u;
}

