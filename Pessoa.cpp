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

void Pessoa::setUniAfiliado(Universidade* u)
{
    if(u == NULL)
    {
        std::cerr << "Erro ao relacionar pessoa em universidade nula" << std::endl;
        fflush(stdin);
        exit(1);
    }

    uniAfiliado = u;
}

void Pessoa::setDptoAfiliado(Departamento* d)
{
    if(d == NULL)
    {
        std::cerr << "Erro ao relacionar pessoa em um departamento nulo" << std::endl;
        fflush(stdin);
        exit(1);
    }

    depAfiliado = d;

}

void Pessoa::printAfiliacao() 
{
    if(this->getUniAfiliado() == NULL && this->getDptoAfiliado() == NULL)
    {
        std::cout << "A Pessoa " << this->getName() << " não possui afiliação." << std::endl;
    }

    else if(this->getUniAfiliado() == NULL && this->getDptoAfiliado() != NULL)
    {
        std::cout << "A Pessoa " << this->getName() << " não está afiliado a alguma universidade "
        << " Mas está afiliado ao departamento " << depAfiliado->getNome() << std::endl;
    }
    
    else if(this->getUniAfiliado() != NULL && this ->getDptoAfiliado() == NULL)
    {
        std::cout << "A Pessoa " << this->getName() << " está afiliado a alguma universidade " << uniAfiliado->getNome() 
        << " Mas não está afiliado a um departamento." << std::endl;
    }
    else 
    {
        std::cout << "A Pessoa " << this->getName() << " está afiliado a universidade " << uniAfiliado->getNome() << " E ao departamento " << depAfiliado->getNome() << std::endl;
    }
}
