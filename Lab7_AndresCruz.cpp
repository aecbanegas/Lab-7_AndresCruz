#include "Persona.h"
#include "Poder.h"
#include "Air.h"
#include "Water.h"
#include "Fire.h"
#include "Earth.h"
#include "Non.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curativo.h"
#include "Invocacion.h"
#include <fstream>
#include <iostream>
using std::ofstream;
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;
int main(){
    int opcm=0;
    vector<Persona*> personas;
    vector<Poder*> poderes;
    while(opcm!=4){
        cout<<"Registro Nacional de Maestros de los Elementos"<<endl
            <<"1. Agregar Personas"<<endl
            <<"2. Listar Personas"<<endl
            <<"3. Eliminar Personas"<<endl
            <<"4. Salir"<<endl
            <<"Ingrese una opcion: "<<endl;
        cin>>opcm;
        if (opcm==1){
            string nacion,nombre;
            int edad,se;
            bool sexo;
            cout<<"A que nacion pertence? "<<endl;
            cin>>nacion;
            cout<<"Cual es su nombre? "<<endl;
            cin>>nombre;
            cout<<"Cual es su edad? "<<endl;
            cin>>edad;
            cout<<"Cual es su sexo? Masculino ingrese 1 Femenino ingrese cualquiera "<<endl;
            cin>>se;
            if(se==1){
                sexo=true;
            }else{
                sexo=false;
            }
            int opcelem=0;
            while(opcelem<1||opcelem>5){
                cout<<"Menu Elementos"<<endl
                    <<"1. Air Bender"<<endl
                    <<"2. Fire Bender"<<endl
                    <<"3. Water Bender"<<endl
                    <<"4. Earth Bender"<<endl
                    <<"5. Non Bender"<<endl
                    <<"Ingrese su elemento: "<<endl;
                cin>>opcelem;
                switch (opcelem){
                    case 1:{
                        double pelo;
                        string color;
                        cout<<"Ingrese el cantidad de pelo: "<<endl;
                        cin>>pelo;
                        cout<<"Ingrese el color de las flechas: "<<endl;
                        cin>>color;
                        int opcpod=0;
                        while(opcpod<1||opcpod>5){
                            cout<<"Menu Poderes"<<endl
                                <<"1. Ofensivo"<<endl
                                <<"2. Defensivo"<<endl
                                <<"3. Curativo"<<endl
                                <<"4. Invocacion"<<endl
                                <<"Ingrese una opcion:"<<endl;
                            cin>>opcpod;
                            switch (opcpod){
                                case 1:{
                                    double rango,fuerza;
                                    cout<<"Ingrese rango: "<<endl;
                                    cin>>rango;
                                    cout<<"Ingrese fuerza: "<<endl;
                                    cin>>fuerza;
                                    poderes.push_back(new Ofensivo(rango,fuerza));
                                    break;}
                                case 2:{
                                    double resistencia, duracion;
                                    cout<<"Ingrese resistencia: "<<endl;
                                    cin>>resistencia;
                                    cout<<"Ingrese duracion: "<<endl;
                                    cin>>duracion;
                                    poderes.push_back(new Defensivo(resistencia,duracion));
                                    break;}
                                case 3:{
                                    string tipo;
                                    cout<<"Ingrese tipo de curación: "<<endl;
                                    cin>>tipo;
                                    poderes.push_back(new Curativo(tipo));
                                    break;}
                                case 4:{
                                    string nombre,especie,habilidad;
                                    int masc;
                                    bool tmasc;
                                    cout<<"Ingrese el nombre de su mascota: "<<endl;
                                    cin>>nombre;
                                    cout<<"Ingrese especie: "<<endl;
                                    cin>>especie;
                                    cout<<"Ingrese habilidad: "<<endl;
                                    cin>>habilidad;
                                    cout<<"Ingrese tipo de mascota: Domestica ingrese 1 De Guerra ingrese cualquier numero:"<<endl;
                                    cin>>masc;
                                    if(masc==1){
                                        tmasc=true;
                                    }else{
                                        tmasc=false;
                                    }
                                    poderes.push_back(new Invocacion(nombre,especie,habilidad,tmasc));
                                    break;}
                            }//fin switch
                        }//fin while
                        personas.push_back(new Air(nacion,nombre,edad,sexo,pelo,color,poderes[poderes.size()-1]));
                        break;}
                    case 2:{
                        double cicatrices;
                        double victorias;
                        cout<<"Ingrese cantidad de cicatrices:"<<endl;
                        cin>>cicatrices;
                        cout<<"Ingrese cantidad de victorias en Paj Sho:"<<endl;
                        cin>>victorias;
                        int opcpod=0;
                        while(opcpod<1||opcpod>5){
                            cout<<"Menu Poderes"<<endl
                                <<"1. Ofensivo"<<endl
                                <<"2. Defensivo"<<endl
                                <<"3. Curativo"<<endl
                                <<"4. Invocacion"<<endl
                                <<"Ingrese una opcion:"<<endl;
                            cin>>opcpod;
                            switch (opcpod){
                                case 1:{
                                    double rango,fuerza;
                                    cout<<"Ingrese rango: "<<endl;
                                    cin>>rango;
                                    cout<<"Ingrese fuerza: "<<endl;
                                    cin>>fuerza;
                                    poderes.push_back(new Ofensivo(rango,fuerza));
                                    break;}
                                case 2:{
                                    double resistencia, duracion;
                                    cout<<"Ingrese resistencia: "<<endl;
                                    cin>>resistencia;
                                    cout<<"Ingrese duracion: "<<endl;
                                    cin>>duracion;
                                    poderes.push_back(new Defensivo(resistencia,duracion));
                                    break;}
                                case 3:{
                                    string tipo;
                                    cout<<"Ingrese tipo de curación: "<<endl;
                                    cin>>tipo;
                                    poderes.push_back(new Curativo(tipo));
                                    break;}
                                case 4:{
                                    string nombre,especie,habilidad;
                                    int masc;
                                    bool tmasc;
                                    cout<<"Ingrese el nombre de su mascota: "<<endl;
                                    cin>>nombre;
                                    cout<<"Ingrese especie: "<<endl;
                                    cin>>especie;
                                    cout<<"Ingrese habilidad: "<<endl;
                                    cin>>habilidad;
                                    cout<<"Ingrese tipo de mascota: Domestica ingrese 1 De Guerra ingrese cualquier numero:"<<endl;
                                    cin>>masc;
                                    if(masc==1){
                                        tmasc=true;
                                    }else{
                                        tmasc=false;
                                    }
                                    poderes.push_back(new Invocacion(nombre,especie,habilidad,tmasc));
                                    break;}
                            }//fin switch
                        }//fin while
                        personas.push_back(new Fire(nacion,nombre,edad,sexo,cicatrices,victorias,poderes[poderes.size()-1]));
                        break;}
                    case 3:{
                        int reg;
                        bool tribu;
                        cout<<"Cual es su tribu de origen? Norte ingrese 1 Sur ingrese cualquiera"<<endl;
                        cin>>reg;
                        if(reg==1){
                            tribu=true;
                        }else{
                            tribu=false;
                        }
                        string arma;
                        cout<<"Ingrese su arma preferida: "<<endl;
                        cin>>arma;
                        int opcpod=0;
                        while(opcpod<1||opcpod>5){
                            cout<<"Menu Poderes"<<endl
                                <<"1. Ofensivo"<<endl
                                <<"2. Defensivo"<<endl
                                <<"3. Curativo"<<endl
                                <<"4. Invocacion"<<endl
                                <<"Ingrese una opcion:"<<endl;
                            cin>>opcpod;
                            switch (opcpod){
                                case 1:{
                                    double rango,fuerza;
                                    cout<<"Ingrese rango: "<<endl;
                                    cin>>rango;
                                    cout<<"Ingrese fuerza: "<<endl;
                                    cin>>fuerza;
                                    poderes.push_back(new Ofensivo(rango,fuerza));
                                    break;}
                                case 2:{
                                    double resistencia, duracion;
                                    cout<<"Ingrese resistencia: "<<endl;
                                    cin>>resistencia;
                                    cout<<"Ingrese duracion: "<<endl;
                                    cin>>duracion;
                                    poderes.push_back(new Defensivo(resistencia,duracion));
                                    break;}
                                case 3:{
                                    string tipo;
                                    cout<<"Ingrese tipo de curación: "<<endl;
                                    cin>>tipo;
                                    poderes.push_back(new Curativo(tipo));
                                    break;}
                                case 4:{
                                    string nombre,especie,habilidad;
                                    int masc;
                                    bool tmasc;
                                    cout<<"Ingrese el nombre de su mascota: "<<endl;
                                    cin>>nombre;
                                    cout<<"Ingrese especie: "<<endl;
                                    cin>>especie;
                                    cout<<"Ingrese habilidad: "<<endl;
                                    cin>>habilidad;
                                    cout<<"Ingrese tipo de mascota: Domestica ingrese 1 De Guerra ingrese cualquier numero:"<<endl;
                                    cin>>masc;
                                    if(masc==1){
                                        tmasc=true;
                                    }else{
                                        tmasc=false;
                                    }
                                    poderes.push_back(new Invocacion(nombre,especie,habilidad,tmasc));
                                    break;}
                            }//fin switch
                        }//fin while
                        personas.push_back(new Water(nacion,nombre,edad,sexo,tribu,arma,poderes[poderes.size()-1]));
                        break;}
                    case 4:{
                        double coles;
                        cout<<"Ingrese la cantidad de coles cosechadas: "<<endl;
                        cin>>coles;
                        int graduacion;
                        cout<<"Ingrese la graduacion de ojos: **NO DEBE SER MAYOR A 20"<<endl;
                        cin>>graduacion;
                        while(graduacion>20){
                            cout<<"Ingrese la graduacion de ojos: **NO DEBE SER MAYOR A 20"<<endl;
                            cin>>graduacion;
                        }
                        int opcpod=0;
                        while(opcpod<1||opcpod>5){
                            cout<<"Menu Poderes"<<endl
                                <<"1. Ofensivo"<<endl
                                <<"2. Defensivo"<<endl
                                <<"3. Curativo"<<endl
                                <<"4. Invocacion"<<endl
                                <<"Ingrese una opcion:"<<endl;
                            cin>>opcpod;
                            switch (opcpod){
                                case 1:{
                                    double rango,fuerza;
                                    cout<<"Ingrese rango: "<<endl;
                                    cin>>rango;
                                    cout<<"Ingrese fuerza: "<<endl;
                                    cin>>fuerza;
                                    poderes.push_back(new Ofensivo(rango,fuerza));
                                    break;}
                                case 2:{
                                    double resistencia, duracion;
                                    cout<<"Ingrese resistencia: "<<endl;
                                    cin>>resistencia;
                                    cout<<"Ingrese duracion: "<<endl;
                                    cin>>duracion;
                                    poderes.push_back(new Defensivo(resistencia,duracion));
                                    break;}
                                case 3:{
                                    string tipo;
                                    cout<<"Ingrese tipo de curación: "<<endl;
                                    cin>>tipo;
                                    poderes.push_back(new Curativo(tipo));
                                    break;}
                                case 4:{
                                    string nombre,especie,habilidad;
                                    int masc;
                                    bool tmasc;
                                    cout<<"Ingrese el nombre de su mascota: "<<endl;
                                    cin>>nombre;
                                    cout<<"Ingrese especie: "<<endl;
                                    cin>>especie;
                                    cout<<"Ingrese habilidad: "<<endl;
                                    cin>>habilidad;
                                    cout<<"Ingrese tipo de mascota: Domestica ingrese 1 De Guerra ingrese cualquier numero:"<<endl;
                                    cin>>masc;
                                    if(masc==1){
                                        tmasc=true;
                                    }else{
                                        tmasc=false;
                                    }
                                    poderes.push_back(new Invocacion(nombre,especie,habilidad,tmasc));
                                    break;}
                            }//fin switch
                        }//fin while
                        personas.push_back(new Earth(nacion,nombre,edad,sexo,coles,graduacion,poderes[poderes.size()-1]));
                        break;}
                    case 5:{
                        string trabajo;
                        double fuerza;
                        double velocidad;
                        cout<<"Ingrese su trabajo: "<<endl;
                        cin>>trabajo;
                        cout<<"Ingrese su fuerza: "<<endl;
                        cin>>fuerza;
                        cout<<"Ingrese su velocidad: "<<endl;
                        cin>>velocidad;
                        personas.push_back(new Non(nacion,nombre,edad,sexo,trabajo,fuerza,velocidad));
                        break;}
                }//fin switch
            }//while            
        }
        if (opcm==2){//listar
            for (int i = 0; i < 5; i++){//recorre la lista 5 veces
                for (int j = 0; j < personas.size(); j++){//revisa los elementes de uno en uno
                    if(i==0&&personas[j]->Tipo()=="Water"){//
                        cout<<"Posicion: "<<j<<" "<<personas[j]->toString()<<endl;
                    }
                    if(i==1&&personas[j]->Tipo()=="Fire"){
                        cout<<"Posicion: "<<j<<" "<<personas[j]->toString()<<endl;
                    }
                    if(i==2&&personas[j]->Tipo()=="Earth"){
                        cout<<"Posicion: "<<j<<" "<<personas[j]->toString()<<endl;
                    }
                    if(i==3&&personas[j]->Tipo()=="Air"){
                        cout<<"Posicion: "<<j<<" "<<personas[j]->toString()<<endl;
                    }
                    if(i==4&&personas[j]->Tipo()=="Non"){
                        cout<<"Posicion: "<<j<<" "<<personas[j]->toString()<<endl;
                    }
                }                
            }   
        }
        if (opcm==3){//eliminar
            int pos;
            cout<<"Ingrese la posicion que desea eliminar: "<<endl;
            cin>>pos;
            delete personas[pos];
            delete poderes[pos];        
            personas.erase(personas.begin()+pos);
            poderes.erase(poderes.begin()+pos);
            cout<<"Se elimino de manera satisfactoria"<<endl;
        }
    }
    cout<<"Se creara un archivo de Texto .txt con los maestros que no fueron eliminados y se eliminaran los que estaban antes."<<endl;
    ofstream file;
    file.open("Maestros.txt");
    /*file("Maestros.txt",ios::noreplace);*///que no sobreescriba el archivo
    for (int i = 0; i < personas.size(); i++){
        file<<personas[i]->toString()<<"\n";
    }
    file.close();
    for (int i = 0; i < personas.size(); i++){//liberar memoria
        delete personas[i];
        delete poderes[i];
    }
    //borrar vectores
    personas.clear();
    poderes.clear();
    return 0;
}