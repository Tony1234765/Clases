#include "Pantalon.h"

#include <iostream>
using namespace std;

Pantalon::Pantalon(){
    precio = 230;
    cantidad = 3;
    material = "mezclilla";
    color = "cafe";
    talla = "grande";
}
Pantalon::Pantalon(int precio, int cantidad, string material, string color, string talla){
    this->precio=precio;
    this->cantidad=cantidad;
    this->material=material;
    this->color=color;
    this->talla=talla;
}
Pantalon::Pantalon(int cantidad, string color, string talla){
    this->cantidad=cantidad;
    this->color=color;
    this->talla=talla;
}
Pantalon::~Pantalon(){
    cout<<"Adios"<<endl;
}
void Pantalon::setcantidad(int cantidad){
    this->cantidad=cantidad;
}
int Pantalon::getcantidad(){
    return cantidad;
}
void Pantalon::setprecio(int precio){
    this->precio=precio;
}
int Pantalon::getprecio(){
    return precio;
}
void Pantalon::setcolor(string color){
    this->color=color;
}
string Pantalon::getcolor(){
    return color;
}
void Pantalon::setmaterial(string material){
    this->material = material;
}
string Pantalon::getmaterial(){
    return material;
}
void Pantalon::settalla(string talla){
    this->talla=talla;
}
string Pantalon::gettalla(){
    return talla;
}
void Pantalon::bodega(){
    cout<<"En la bodega estan todos los pantalones"<<endl;
}
void Pantalon::bodega(string color){
    cout<<"En la bodega hay pantalones de color "<<color<<endl;
}
int Pantalon:: operator - (Pantalon *pantalonobj){
    return cantidad - pantalonobj->cantidad;
}
void Pantalon::metodofriend(Camisa &camisaobj){
    combo = &camisaobj;
    cout<<"Combo pantalon y camisa, codigo de la camisa: "<<camisaobj.codigo<<endl;
}
