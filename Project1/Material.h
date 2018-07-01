#ifndef MATERIAL_H
#define MATERIAL_H
//Begin section for file Material.h
//TODO: Add definitions that you want preserved
//End section for file Material.h
#include "Recursos.h"



class OrdemDeServiço; //Dependency Generated Source:Material Target:OrdemDeServiço





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Material : Recursos
{
    //Begin section for Material
    //TODO: Add attributes that you want preserved
    //End section for Material

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char tipo;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char unidadeDeMedida;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float custoPorMedida;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float quantidadeEmEstoque;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemDeServiço * ordemDeServiço;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Material(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Material(); 



        //get tipo
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char get_tipo(); 



        //set tipo
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_tipo(char tipo); 



        //get unidadeDeMedida
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char get_unidadeDeMedida(); 



        //set unidadeDeMedida
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_unidadeDeMedida(char unidadeDeMedida); 



        //get custoPorMedida
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float get_custoPorMedida(); 



        //set custoPorMedida
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_custoPorMedida(float custoPorMedida); 



        //get quantidadeEmEstoque
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float get_quantidadeEmEstoque(); 



        //set quantidadeEmEstoque
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_quantidadeEmEstoque(float quantidadeEmEstoque); 



        //get ordemDeServiço
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemDeServiço * get_ordemDeServiço(); 



        //set ordemDeServiço
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_ordemDeServiço(OrdemDeServiço * ordemDeServiço); 



};  //end class Material



#endif
