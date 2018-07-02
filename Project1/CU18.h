#ifndef CU18_H
#define CU18_H

#include "DAO_Funcionario.h"
#include <iostream>
#include <string>
using namespace std;
using sql::ResultSet;
//Begin section for file CU18.h
//TODO: Add definitions that you want preserved
//End section for file CU18.h




//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class CU18
{
    //Begin section for CU18
    //TODO: Add attributes that you want preserved
    //End section for CU18

	private:
		static CU18 * instance;

    public:
		static CU18* getInstance();

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        CU18(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~CU18(); 

		ResultSet* selecionarFuncionario();
		ResultSet* selecionarFuncionarioEquipe(string equipe);
		void insereFuncionario(string nome, string cpf, string salario, string tipoFunc);
		void insereFuncionarioUser(string nome, string cpf, string salario, string tipoFunc, string usuario);
		void insereFuncionarioEquipe(string nome, string cpf, string salario, string tipoFunc, string equipe);
		void insereFuncionarioUE(string nome, string cpf, string salario, string tipoFunc, string usuario, string equipe);
		void alteraFuncionario(string id, string nome, string cpf, string salario, string tipoFunc);
		void alteraFuncionarioUser(string id, string nome, string cpf, string salario, string tipoFunc, string usuario);
		void alteraFuncionarioEquipe(string id, string nome, string cpf, string salario, string tipoFunc, string equipe);
		void alteraFuncionarioUE(string id, string nome, string cpf, string salario, string tipoFunc, string usuario, string equipe);
		void excluiFuncionario(string id);


};  //end class CU18



#endif
