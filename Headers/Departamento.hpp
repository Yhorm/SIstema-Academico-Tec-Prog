#include <iostream>
#include <stdio.h>


#pragma once


class Departamento 
{
    private:
        unsigned int ID;
        std::string nome;

        Universidade* pUnivAssoc;

        //lista de professores afiliados
        //lista de disciplinas(TO-DO)

    public:
    
        Departamento(const int i, std::string n = "");
        ~Departamento();

        void setUnivAssoc(Universidade* univCad = NULL);
        const Universidade* getUnivAssoc() {return pUnivAssoc; };

        const unsigned int getID() { return ID; };
        void setId(const int i) { ID = i; };

        void setNome(const std::string n) { nome = n; };
        const std::string getNome() { return nome; }; 

};

