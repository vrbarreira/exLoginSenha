#ifndef USU�RIO_H
#define USU�RIO_H
//Begin section for file Usu�rio.h
//TODO: Add definitions that you want preserved
//End section for file Usu�rio.h


class Funcion�rio; //Dependency Generated Source:Usu�rio Target:Funcion�rio


class GestorRegional; //Dependency Generated Source:Usu�rio Target:GestorRegional





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Usu�rio
{
    //Begin section for Usu�rio
    //TODO: Add attributes that you want preserved
    //End section for Usu�rio

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int id;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char login;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char senha;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Funcion�rio * funcion�rio;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        GestorRegional * gestorRegional;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Usu�rio(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Usu�rio(); 



        //get id
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_id(); 



        //set id
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_id(int id); 



        //get login
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char get_login(); 



        //set login
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_login(char login); 



        //get senha
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char get_senha(); 



        //set senha
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_senha(char senha); 



        //get funcion�rio
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Funcion�rio * get_funcion�rio(); 



        //set funcion�rio
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_funcion�rio(Funcion�rio * funcion�rio); 



        //get gestorRegional
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        GestorRegional * get_gestorRegional(); 



        //set gestorRegional
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_gestorRegional(GestorRegional * gestorRegional); 



};  //end class Usu�rio



#endif
