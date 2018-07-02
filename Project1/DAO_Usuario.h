#pragma once
#ifndef DAO_USUARIO_H
#define DAO_USUARIO_H
#include "MySQLDAO.h"
#include <iostream>
#include <string>

using sql::ResultSet;
using namespace std;

class DAO_Usuario
{
private:
	static DAO_Usuario * instance;
public:
	static DAO_Usuario* getInstance();

	virtual ~DAO_Usuario();

	ResultSet* selecionarUsuario(string login, string senha);
};

#endif#pragma once
