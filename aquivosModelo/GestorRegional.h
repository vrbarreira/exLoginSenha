#ifndef GESTORREGIONAL_H
#define GESTORREGIONAL_H
//Begin section for file GestorRegional.h
//TODO: Add definitions that you want preserved
//End section for file GestorRegional.h


class OrdemDeServi�o; //Dependency Generated Source:GestorRegional Target:OrdemDeServi�o





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class GestorRegional
{

    //Begin section for GestorRegional
    //TODO: Add attributes that you want preserved
    //End section for GestorRegional

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
         regiao;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemDeServi�o * ordemDeServi�o;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        GestorRegional(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        ~GestorRegional(); 



        //get regiao
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
         get_regiao(); 



        //set regiao
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_regiao( regiao); 



        //get ordemDeServi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemDeServi�o * get_ordemDeServi�o(); 



        //set ordemDeServi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_ordemDeServi�o(OrdemDeServi�o * ordemDeServi�o); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void consultarOrdemDeServi�o(); 



};  //end class GestorRegional



#endif
