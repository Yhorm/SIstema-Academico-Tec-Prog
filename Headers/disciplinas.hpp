#include <iostream>
#include "Headers/lista.hpp"


class Departamento;

class Disciplina
{
    private:

        Departamento* depAssoc;
        std::string nome;
        unsigned int codDisc; //modificar
        unsigned int id;
        int qtdAlunos;
        //lista alunos participantes
        listas::lista<Aluno*> listaAlunos;
        //ponteiro para o professor que dá a disciplina?
        Professor* pProf;

    public:
        Disciplina();
        ~Disciplina();

        //sets e gets
        //listar alunos + professor


};
