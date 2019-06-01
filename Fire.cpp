#include "Fire.h"
#include <sstream>
using std::stringstream;
Fire::Fire(string nac,string nom,int ed,bool se,double cica,double vict,Poder* pod):Persona(nac,nom,ed,se){
    cicatrices=cica;
    victorias=vict;
    poder=pod;
}
string Fire::toString(){
    stringstream mostrar;
    mostrar<<"Pertenece a la nacion: "<<nacion<<" Su nombre es: "<<nombre<<"\n"<<"Su edad es: "<<edad;
    if(sexo){//masculino
        mostrar<<" Su sexo es: masculino ";
    }else{//femenino
        mostrar<<" Su sexo es: femenino ";
    }
    mostrar<<"Elemento: Fire Bender Cantidad de Cicatrices: "<<cicatrices<<" Cantidad de Victorias: "<<victorias<<"\n";
    mostrar<<poder->toString();
    string imprimir=mostrar.str();
    return imprimir;
}
string Fire::Tipo(){
    return "Fire";
}