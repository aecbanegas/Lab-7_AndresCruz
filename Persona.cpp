#include "Persona.h"
#include <sstream>
using std::stringstream;
Persona::Persona(string nac,string nom,int ed,bool se){
    nacion=nac;
    nombre=nom;
    edad=ed;
    sexo=se;
}
string Persona::toString(){
    /*stringstream mostrar;
    mostrar<<"Pertenece a la nacion: "<<nacion<<" Su nombre es: "<<nombre<<"/n"<<"Su edad es: "<<edad;
    if(sexo){//masculino
        mostrar<<" Su sexo es: masculino ";
    }else{//femenino
        mostrar<<" Su sexo es: femenino ";
    }
    mostrar<<"/n"<<(elemento->toString())<<"/n";
    if(poder!=NULL){
        mostrar<<(poder->toString());
    }
    string imprimir=mostrar.str();
    return imprimir;*/
    return 0;   
}
string Persona::Tipo(){
    return 0;
}