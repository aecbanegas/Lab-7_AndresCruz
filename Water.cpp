#include "Water.h"
#include <sstream>
using std::stringstream;
Water::Water(string nac,string nom,int ed,bool se,bool trib,string arm,Poder* pod):Persona(nac,nom,ed,se){
    tribu=trib;
    arma=arm;
    poder=pod;
}
string Water::toString(){
    stringstream mostrar;
    mostrar<<"Pertenece a la nacion: "<<nacion<<" Su nombre es: "<<nombre<<"\n"<<"Su edad es: "<<edad;
    if(sexo){//masculino
        mostrar<<" Su sexo es: masculino ";
    }else{//femenino
        mostrar<<" Su sexo es: femenino ";
    }
    mostrar<<"Elemento: Water Bender Su tribu de origen es: ";
    if(tribu){
        mostrar<<"Norte ";
    }else{
        mostrar<<"Sur ";
    }
    mostrar<<"Su arma preferida es: "<<arma<<"\n";
    mostrar<<poder->toString();
    string imprimir=mostrar.str();
    return imprimir;
}
string Water::Tipo(){
    return "Water";
}