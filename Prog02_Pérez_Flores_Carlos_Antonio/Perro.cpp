#include "Perro.h"
#include <iostream>
using namespace std;
Perro::Perro()
{
    nombre="Alf";
    raza = "shih tzu";
    tamanho = "pequeno";
    pelaje = "rizado";
    meses = 18;
}
Perro::Perro(string nombre, string raza, string tamanho, string pelaje, int meses){
    this->nombre=nombre;
    this->raza=raza;
    this->tamanho=tamanho;
    this->pelaje=pelaje;
    this->meses=meses;
}
Perro::Perro(string raza, string pelaje, int meses){
    this->raza=raza;
    this->pelaje=pelaje;
    this->meses=meses;
}
Perro::~Perro(){
    cout<<"Adios"<<endl;
}
void Perro::metodofriendAlumno(Alumno &alumnoobj){
    cout<<"Hay un perro en "<<alumnoobj.centro<<endl;
}
void Perro::jugar(){
    cout<<"El perro esta jugando"<<endl;
}
void Perro::jugar(string juguete){
    cout<<"El perro esta jugando con "<<juguete<<endl;
}
void Perro::setnombre(string nombre){
    this->nombre=nombre;
}
string Perro::getnombre(){
    return nombre;
}
void Perro::setraza(string raza){
    this->raza=raza;
}
string Perro::getraza(){
    return raza;
}
void Perro::settamanho(string tamanho){
    this->tamanho=tamanho;
}
string Perro::gettamanho(){
    return tamanho;
}
void Perro::setpelaje(string pelaje){
    this->pelaje=pelaje;
}
string Perro::getpelaje(){
    return pelaje;
}
void Perro::setmeses(int meses){
    this->meses=meses;
}
int Perro::getmeses(){
    return meses;
}
int Perro::operator*(Perro &perroobj){
    return meses * perroobj.meses;
}
