#include "Non.h"
#include <sstream>
using std::stringstream;
Non::Non(string nac,string nom,int ed,bool se,string trab,double fuer,double vel):Persona(nac,nom,ed,se){
    trabajo=trab;
    fuerza=fuer;
    velocidad=vel;
}
string Non::toString(){
    stringstream mostrar;
    mostrar<<"Pertenece a la nacion: "<<nacion<<" Su nombre es: "<<nombre<<"\n"<<"Su edad es: "<<edad;
    if(sexo){//masculino
        mostrar<<" Su sexo es: masculino ";
    }else{//femenino
        mostrar<<" Su sexo es: femenino ";
    }
    mostrar<<"Elemento: Non Bender Su Trabajo es: "<<trabajo<<" Su fueza es: "<<fuerza<<" Su velocidad es: "<<velocidad<<"\n";
    string imprimir=mostrar.str();
    return imprimir;
}
string Non::Tipo(){
    return "Non";
}