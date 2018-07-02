#ifndef CU19_H
#define CU19_H
//Begin section for file CU19.h
//TODO: Add definitions that you want preserved
//End section for file CU19.h

#include "DAO_Equipe.h"
#include <iostream>
#include <string>
using namespace std;
using sql::ResultSet;


//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class CU19
{
    //Begin section for CU19
    //TODO: Add attributes that you want preserved
    //End section for CU19

	private:
		static CU19 * instance;

    public:
		static CU19* getInstance();

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        CU19(); 


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~CU19(); 

		ResultSet* selecionarEquipe();
		void insereEquipe(string nome, string numTrab, string custoDesloc, string custoHora, string horarioServ, string horarioTerm);
		void alteraEquipe(string id, string nome, string numTrab, string custoDesloc, string custoHora, string horarioServ, string horarioTerm);
		void excluiEquipe(string id);



};  //end class CU19



#endif
