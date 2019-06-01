#include "Air.h"
#include <sstream>
using std::stringstream;
Air::Air(string nac,string nom,int ed,bool se,double pel, string col,Poder* pod):Persona(nac,nom,ed,se){
    pelo=pel;
    color=col;
    poder=pod;
}
string Air::toString(){
    stringstream mostrar;
    mostrar<<"Pertenece a la nacion: "<<nacion<<" Su nombre es: "<<nombre<<"\n"<<"Su edad es: "<<edad;
    if(sexo){//masculino
        mostrar<<" Su sexo es: masculino ";
    }else{//femenino
        mostrar<<" Su sexo es: femenino ";
    }
    mostrar<<"Elemento: Air Bender La cantidad de pelo es: "<<pelo<<" El color de sus flechas es: "<<color<<"\n";
    mostrar<<poder->toString();
    string imprimir=mostrar.str();
    return imprimir;
}
string Air::Tipo(){
    return "Air";
}