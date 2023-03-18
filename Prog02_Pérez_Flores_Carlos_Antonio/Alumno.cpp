#include "Alumno.h"

#include <iostream>
using namespace std;
Alumno::Alumno()
{
    nombre = "Federico";
    carrera = "Computacion";
    centro = "CUCEI";
    edad = 21;
    codigo = 1547789634;
}
Alumno::Alumno(string nombre, string carrera, string centro, int edad, int codigo){
    this->nombre=nombre;
    this->carrera = carrera;
    this->centro=centro;
    this->edad=edad;
    this->codigo=codigo;
}
Alumno::Alumno(string carrera, string centro, int edad){
    this->carrera=carrera;
    this->centro=centro;
    this->edad=edad;
}
Alumno::~Alumno(){
    cout<<"Adios"<<endl;
}

void Alumno::estudiar(){
    cout<<"Estoy estudiando una carrera universitaria"<<endl;
}
void Alumno::estudiar(string centro){
    cout<<"Estoy estudiando una carrera universitaria en "<<centro<<endl;
}
void Alumno::setnombre(string nombre){
    this->nombre=nombre;
}
string Alumno::getnombre(){
    return nombre;
}
void Alumno::setcarrera(string carrera){
    this->carrera=carrera;
}
string Alumno::getcarrera(){
    return carrera;
}
void Alumno::setcentro(string centro){
    this->centro=centro;
}
string Alumno::getcentro(){
    return centro;
}
void Alumno::setedad(int edad){
    this->edad=edad;
}
int Alumno::getedad(){
    return edad;
}
void Alumno::setcodigo(int codigo){
    this->codigo=codigo;
}
int Alumno::getcodigo(){
    return codigo;
}
void Alumno::metodofriendMaestro(Maestro &maestroobj){
    cout<<"El alummno agendo la materia con el profesor "<<maestroobj.nombre<<endl;
}
int Alumno::operator > (Alumno *alumnoobj){
    return edad > alumnoobj->edad;
}
