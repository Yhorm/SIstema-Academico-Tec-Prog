#include <iostream>
#include <stdio.h>

#include "Headers/Departamento.hpp"

#pragma once

class Universidade
{
    private:
        unsigned int ID;
        std::string nome;

        unsigned int qtdAlunos;
        unsigned int qtdDptos;

    public:
        Universidade();
        ~Universidade();

        const std::string getNome() { return nome; };
        void setNome(const std::string n) { nome = n; };

        

        const unsigned int getQtdAlunos() { return qtdAlunos; };
        const unsigned int getQtdDptos() { return qtdDptos; };
        
        void setQtdAlunos(const int qtd) { qtdAlunos = qtd; };
        void setQtdDptos(const int qtd) { qtdDptos = qtd; };

};