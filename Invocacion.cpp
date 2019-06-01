#include "Invocacion.h"
#include <sstream>
using std::stringstream;
string Invocacion::toString(){
    stringstream mostrar;
    mostrar<<"Su poder es tipo: Invocacion Mascota Su mascota se llama: "<<nombre<<"\nEs de especie: "<<especie
        <<" Su habilidad es: "<<habilidad<<"\nEs de tipo: ";
    if(tipo){
        mostrar<<"Domestico";
    }else{
        mostrar<<"De Guerra";
    }
    string imprimir=mostrar.str();
    return imprimir;
}
Invocacion::Invocacion(string nom, string esp, string hab, bool tip){
    nombre=nom;
    especie=esp;
    habilidad=hab;
    tipo=tip;
}