#include "Earth.h"
#include <sstream>
using std::stringstream;
Earth::Earth(string nac,string nom,int ed,bool se,double col,int grad,Poder* pod):Persona(nac,nom,ed,se){
    coles=col;
    graduacion=grad;
    poder=pod;
}
string Earth::toString(){
    stringstream mostrar;
    mostrar<<"Pertenece a la nacion: "<<nacion<<" Su nombre es: "<<nombre<<"\n"<<"Su edad es: "<<edad;
    if(sexo){//masculino
        mostrar<<" Su sexo es: masculino ";
    }else{//femenino
        mostrar<<" Su sexo es: femenino ";
    }
    mostrar<<"Elemento: Earth Bender Coles Cosechadas: "<<coles<<" Graduacion de ojos: "<<graduacion<<"\n";
    mostrar<<poder->toString();
    string imprimir=mostrar.str();
    return imprimir;
}
string Earth::Tipo(){
    return "Earth";
}