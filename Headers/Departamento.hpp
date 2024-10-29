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
        Departamento();
        ~Departamento();

        void setUniv(const Universidade* univCad = NULL);
        const Universidade* getUniv() {return pUniv; };

        const unsigned int getID() { return ID; };
        

};

