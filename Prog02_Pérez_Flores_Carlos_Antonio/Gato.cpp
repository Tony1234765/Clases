#include "Gato.h"

Gato::Gato()
{
    nombre="Canela";
    raza = "Asiatico";
    tamanho = "mediano";
    pelaje = "liso";
    meses = 8;
}
Gato::Gato(string nombre, string raza, string tamanho, string pelaje, int meses){
    this->nombre=nombre;
    this->raza=raza;
    this->tamanho=tamanho;
    this->pelaje=pelaje;
    this->meses=meses;
}
Gato::Gato(string nombre, string raza, string pelaje){
    this->nombre=nombre;
    this->raza=raza;
    this->pelaje=pelaje;
}
Gato::~Gato(){
    cout<<"Adios"<<endl;
}
void Gato::metodofriendPerro(Perro &perroobj){
    cout<<"Un gato esta jugando con un perro "<<perroobj.raza<<endl;
}
void Gato::setnombre(string nombre){
    this->nombre=nombre;
}
string Gato::getnombre(){
    return nombre;
}
void Gato::setraza(string raza){
    this->raza=raza;
}
string Gato::getraza(){
    return raza;
}
void Gato::settamanho(string tamanho){
    this->tamanho=tamanho;
}
string Gato::gettamanho(){
    return tamanho;
}
void Gato::setpelaje(string pelaje){
    this->pelaje=pelaje;
}
string Gato::getpelaje(){
    return pelaje;
}
void Gato::setmeses(int meses){
    this->meses=meses;
}
int Gato::getmeses(){
    return meses;
}
