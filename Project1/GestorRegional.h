#ifndef GESTORREGIONAL_H
#define GESTORREGIONAL_H
//Begin section for file GestorRegional.h
//TODO: Add definitions that you want preserved
//End section for file GestorRegional.h


class OrdemDeServi�o; //Dependency Generated Source:GestorRegional Target:OrdemDeServi�o


class Regional; //Dependency Generated Source:GestorRegional Target:Regional


class Usu�rio; //Dependency Generated Source:GestorRegional Target:Usu�rio





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class GestorRegional
{
    //Begin section for GestorRegional
    //TODO: Add attributes that you want preserved
    //End section for GestorRegional

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemDeServi�o * ordemDeServi�o;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Regional * regional;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Usu�rio * usu�rio;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        GestorRegional(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~GestorRegional(); 



        //get ordemDeServi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemDeServi�o * get_ordemDeServi�o(); 



        //set ordemDeServi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_ordemDeServi�o(OrdemDeServi�o * ordemDeServi�o); 



        //get regional
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Regional * get_regional(); 



        //set regional
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_regional(Regional * regional); 



        //get usu�rio
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Usu�rio * get_usu�rio(); 



        //set usu�rio
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_usu�rio(Usu�rio * usu�rio); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void consultarOrdemDeServi�o(); 



};  //end class GestorRegional



#endif
