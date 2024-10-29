#include <iostream>
#include <stdio.h>


#pragma once


class Departamento 
{
    private:
        unsigned int ID;
        Universidade* pUniv;
    
        //lista de professores afiliados
        //lista de disciplinas(TO-DO)

    public:
        Departamento(const int i);
        ~Departamento();

        void setUniv(Universidade* univCad = NULL);
        const Universidade* getUniv() {return pUniv; };

        const unsigned int getID() { return ID; };
        void setId(const int i) { ID = i; };
    
};

