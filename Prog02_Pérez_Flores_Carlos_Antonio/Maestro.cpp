#include "Maestro.h"
#include <iostream>
using namespace std;
Maestro::Maestro() //constructor 1, inicializa los atributos
{
    nombre = "Antonio";
    materia = "Biologia";
    seccion = "D01";
    turno = "matutino";
    codigo = 94127841;
}
Maestro::Maestro(string nombre, string materia, string seccion, string turno, int codigo) //constructor 2, inicializa los atributos
{
    this->nombre=nombre;
    this->materia=materia;
    this->seccion=seccion;
    this->turno=turno;
    this->codigo=codigo;
}
Maestro::Maestro(string materia, string seccion, int codigo) //constructor 3, inicializa los atributos
{
    this->materia=materia;
    this->seccion=seccion;
    this->codigo=codigo;
}
Maestro::~Maestro(){ //destructor, se invoca automáticamente cuando el objeto sale del ámbito
    cout<<"Adios"<<endl;
}
void Maestro::ensenhar(){
    cout<<"El maestro esta dando clases en CUCEI"<<endl;
}
void Maestro::ensenhar(string materia){
    cout<<"El maestro da "<<materia<<" en CUCEI"<<endl;
}
void Maestro::metodofriend(Pantalon &pantalonobj){
    cout<<"El maestro usa un pantalon de talla: "<<pantalonobj.talla<<endl;
}
void Maestro::setnombre(string nombre){ //establecemos valores a los atributos
    this->nombre=nombre;
}
string Maestro::getnombre(){
    return nombre;
}
void Maestro::setmateria(string materia){ //establecemos valores a los atributos
    this->materia=materia;
}
string Maestro::getmateria(){
    return materia;
}
void Maestro::setseccion(string seccion){ //establecemos valores a los atributos
    this->seccion=seccion;
}
string Maestro::getseccion(){
    return seccion;
}
void Maestro::setturno(string turno){ //establecemos valores a los atributos
    this->turno=turno;
}
string Maestro::getturno(){
    return turno;
}
void Maestro::setcodigo(int codigo){ //establecemos valores a los atributos
    this->codigo=codigo;
}
int Maestro::getcodigo(){
    return codigo;
}
int Maestro::operator+=(int num){
    return codigo +=num;
}
