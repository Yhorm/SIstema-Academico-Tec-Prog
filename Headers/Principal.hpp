#include <iostream>
#include <stdio.h>

#include "Pessoa.hpp"
#include "lista.hpp"


#pragma once

class Principal{
	private:
		Pessoa Newton;
		Pessoa Einstein;
		Pessoa Felipe;
		Pessoa Liane;

		unsigned int idDpto;
		unsigned int idUniv;
		unsigned int idPessoa;
		unsigned int idDisciplina;
	
	public:
		Principal();
		~Principal();
	
		void executar();
};