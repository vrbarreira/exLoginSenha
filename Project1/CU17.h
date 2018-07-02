#ifndef CU17_H
#define CU17_H
//Begin section for file CU17.h
//TODO: Add definitions that you want preserved
//End section for file CU17.h

#include "DAO_Material.h"
#include <iostream>
#include <string>
using namespace std;
using sql::ResultSet;


//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class CU17
{
    //Begin section for CU17
    //TODO: Add attributes that you want preserved
    //End section for CU17

	private:
		static CU17 * instance;

    public:
		static CU17* getInstance();

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        CU17(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~CU17(); 

		ResultSet* selecionarMaterial();
		void insereMaterial(string tipo, string unidadeMedida, string custoPorMedida, string qtdEstoque);
		void alteraMaterial(string tipo, string unidadeMedida, string custoPorMedida);
		void alteraMaterial(string tipo, string qtdEstoque);
		void excluiMaterial(string id);



};  //end class CU17



#endif
