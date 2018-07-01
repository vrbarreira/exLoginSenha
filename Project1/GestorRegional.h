#ifndef GESTORREGIONAL_H
#define GESTORREGIONAL_H
//Begin section for file GestorRegional.h
//TODO: Add definitions that you want preserved
//End section for file GestorRegional.h


class OrdemDeServiço; //Dependency Generated Source:GestorRegional Target:OrdemDeServiço


class Regional; //Dependency Generated Source:GestorRegional Target:Regional


class Usuário; //Dependency Generated Source:GestorRegional Target:Usuário





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class GestorRegional
{
    //Begin section for GestorRegional
    //TODO: Add attributes that you want preserved
    //End section for GestorRegional

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemDeServiço * ordemDeServiço;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Regional * regional;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Usuário * usuário;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        GestorRegional(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~GestorRegional(); 



        //get ordemDeServiço
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemDeServiço * get_ordemDeServiço(); 



        //set ordemDeServiço
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_ordemDeServiço(OrdemDeServiço * ordemDeServiço); 



        //get regional
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Regional * get_regional(); 



        //set regional
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_regional(Regional * regional); 



        //get usuário
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Usuário * get_usuário(); 



        //set usuário
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_usuário(Usuário * usuário); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void consultarOrdemDeServiço(); 



};  //end class GestorRegional



#endif
