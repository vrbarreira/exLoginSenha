#pragma once
#ifndef DAO_Buraco_H
#define DAO_Buraco_H
#include "Buraco.h"
#include "MySQLDAO.h"
#include <iostream>
#include <string>

using sql::ResultSet;
using namespace std;

class DAO_Buraco
{
private:
	static DAO_Buraco * instance;
public:
	static DAO_Buraco* getInstance();

	virtual ~DAO_Buraco();

	ResultSet* selecionarBuraco();
	void insereBuraco(string nome, string endereco, string tamanho, string num_rec, string pos_via, string num_recor);
	void alteraBuraco(string ID, string tamanho);
	void excluiBuraco(string id);
};

#endif