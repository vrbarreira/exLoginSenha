#ifndef CU20_H
#define CU20_H
//Begin section for file CU20.h
//TODO: Add definitions that you want preserved
//End section for file CU20.h

#include "DAO_Usuario.h"
#include <iostream>
#include <string>
using namespace std;
using sql::ResultSet;


//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class CU20
{
    //Begin section for CU20
    //TODO: Add attributes that you want preserved
    //End section for CU20

	private:
		static CU20 * instance;

    public:
		static CU20* getInstance();

		ResultSet* selecionarUsuario(string login, string senha);

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        CU20(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~CU20(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        bool validarSenha(string login, string senha);



};  //end class CU20



#endif
