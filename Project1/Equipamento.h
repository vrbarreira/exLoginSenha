#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H
//Begin section for file Equipamento.h
//TODO: Add definitions that you want preserved
//End section for file Equipamento.h
#include "Recursos.h"



class OrdemDeServi�o; //Dependency Generated Source:Equipamento Target:OrdemDeServi�o





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Equipamento : Recursos
{

    //Begin section for Equipamento
    //TODO: Add attributes that you want preserved
    //End section for Equipamento

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
         nome;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
         tipo;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
         custoDeManuten��o;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemDeServi�o * ordemDeServi�o;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipamento(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Equipamento(); 



        //get nome
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
         get_nome(); 



        //set nome
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_nome( nome); 



        //get tipo
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
         get_tipo(); 



        //set tipo
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_tipo( tipo); 



        //get custoDeManuten��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
         get_custoDeManuten��o(); 



        //set custoDeManuten��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_custoDeManuten��o( custoDeManuten��o); 



        //get ordemDeServi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemDeServi�o * get_ordemDeServi�o(); 



        //set ordemDeServi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_ordemDeServi�o(OrdemDeServi�o * ordemDeServi�o); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void alteraNome(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void alteraTipo(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void alteraCusto(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void getNome(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void getCusto(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void getTipo(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void getEquipamento(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void excluirEquipamento(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void criarEquipamento(); 



};  //end class Equipamento



#endif
