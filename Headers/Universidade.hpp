#include <iostream>
#include <stdio.h>

#include "Headers/Departamento.hpp"
#include "Headers/lista.hpp"

#pragma once

class Universidade
{
    private:
        unsigned int ID;
        std::string nome;

        unsigned int qtdAlunos;
        unsigned int qtdProfessores;
        unsigned int qtdDptos;

        listas::lista<Departamento> depList;

    public:
        Universidade(const int i, const std::string n = "");
        ~Universidade();

        const std::string getNome() { return nome; };
        void setNome(const std::string n) { nome = n; };

        const unsigned int getQtdAlunos() { return qtdAlunos; };
        const unsigned int getQtdDptos() { return qtdDptos; };
        
        void setQtdAlunos(const int qtd) { qtdAlunos = qtd; };
        void setQtdDptos(const int qtd) { qtdDptos = qtd; };

        void insertDpto(Departamento* pDpto) { depList.push_back(pDpto); }
};