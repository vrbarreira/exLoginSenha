#pragma once
#ifndef DAO_EQUIPE_H
#define DAO_EQUIPE_H
#include "EquipeDeObras.h"
#include "MySQLDAO.h"
#include <iostream>
#include <string>

using sql::ResultSet;
using namespace std;

class DAO_Equipe
{
private:
	static DAO_Equipe * instance;
public:
	static DAO_Equipe* getInstance();

	virtual ~DAO_Equipe();

	ResultSet* selecionarEquipe();
	void insereEquipe(string nome, string numTrab, string custoDesloc, string custoHora, string horarioServ, string horarioTerm);
	void alteraEquipe(string id, string nome, string numTrab, string custoDesloc, string custoHora, string horarioServ, string horarioTerm);
	void excluiEquipe(string id);
};

#endif#pragma once
