#include "Camisa.h"
#include <iostream>
#include <iomanip>
using namespace std;
Camisa::Camisa()
{
    precio = 1800;
    codigo = 218405431;
    descuento = 15;
    marca = "Gucci";
    talla = "mediana";
    tipo = "dama";
    color = "verde";
}
Camisa::Camisa(int codigo,int precio, int descuento, string marca, string talla, string tipo, string color){
    this->codigo = codigo;
    this->marca = marca;
    this->color = color;
    this->precio = precio;
    this->descuento = descuento;
    this->tipo = tipo;
    this->talla = talla;
}
Camisa::Camisa(string marca, string tipo, string talla){
    this->marca=marca;
    this->tipo=tipo;
    this->talla=talla;
}
Camisa::~Camisa(){
    cout<<"Adios"<<endl;
}
void Camisa::vender(){
    cout<<setw(18)<<"Precio: "<<precio<<"$"<<endl;
    cout<<setw(18)<<"Codigo: "<<codigo<<endl;
    cout<<setw(18)<<"Descuento: "<<descuento<<"%"<<endl;
    cout<<setw(18)<<"Marca: "<<marca<<endl;
    cout<<setw(18)<<"Talla: "<<talla<<endl;
    cout<<setw(18)<<"Tipo: "<<tipo<<endl;
    cout<<setw(18)<<"Color: "<<color<<endl;
}
void Camisa::vender(int precio, int descuento, string marca){
    cout<<setw(18)<<"Marca: "<<marca<<endl;
    cout<<setw(18)<<"Precio: "<<precio<<"$"<<endl;
    cout<<setw(18)<<"Descuento: "<<descuento<<"%"<<endl;
    int total;
    total = precio - (descuento*precio/100);
    cout<<setw(18)<<"Precio total: "<<total<<"$"<<endl;
}
void Camisa::verificar(){
    cout<<"La camisa con el codigo "<<codigo<<" pertenece a la marca "<<marca<<" y tiene color "<<color<<endl;
}
void Camisa::verificar(int codigo2, int precio2, string talla2, string tipo2){
    cout<<"La camisa con el codigo "<<codigo2<<" es talla "<<talla2<<" y es para "<<tipo2<<", ademas cuesta "<<precio2<<"$"<<endl;
}
int Camisa::getcodigo(){
    return this->codigo;
}
int Camisa::getprecio(){
    return this->precio;
}
int Camisa::getdescuento(){
    return descuento;
}
void Camisa::setmarca(string marca){
    this->marca = marca;
}
string Camisa::getmarca(){
    return marca;
}
void Camisa::setcolor(string color){
    this->color=color;
}
string Camisa::getcolor(){
    return color;
}
void Camisa::settalla(string talla){
    this->talla = talla;
}
string Camisa::gettalla(){
    return talla;
}
void Camisa::settipo(string tipo){
    this->tipo=tipo;
}
string Camisa::gettipo(){
    return tipo;
}
int Camisa::operator/(Camisa *camisaobj){
    return codigo / (camisaobj->precio);
}
int Camisa::operator ++(int){
    descuento++;
    return descuento;
}
ostream& operator<<(ostream& salida,Camisa &camisaobj){
    salida<<"Los atributos del objeto son "<<camisaobj.getmarca()<<" "<<camisaobj.gettalla()<<" "<<camisaobj.getcolor()<<" " <<camisaobj.gettipo()<<"\n";
    return salida;

}
istream& operator>>(istream& entrada, Camisa &camisaobj){
    cout<<"Escribe la marca"<<endl;
    entrada>>camisaobj.marca;
    cout<<"Escribe la talla"<<endl;
    entrada>>camisaobj.talla;
    cout<<"Escribe el color"<<endl;
    entrada>>camisaobj.color;
    cout<<"Caballero o dama?"<<endl;
    entrada>>camisaobj.tipo;
    return entrada;
}
