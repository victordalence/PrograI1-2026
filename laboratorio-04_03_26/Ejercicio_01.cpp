// LABORATORIO PRÁCTICA 
// Materia: Programacion I, Paralelo 4
//Estudiante: Victor Guillermo Dalence Deheza
//Fecha: 04/03/2026

#include <iostream>
using namespace std;
//prototipo de la función
double area_triangulo(double base,double altura);
int main (){
    system("cls");
    double base, altura;
    cout<<"ingrese la base de su triangulo: ";
    cin>>base;
    cout<<endl<<"ingrese la altura de su triangulo: ";
    cin>>altura;
    cout<<endl<<"aqui esta el area de su triangulo: "<<area_triangulo(base, altura);
}
double area_triangulo(double base,double altura)
{
    double area;
    area=(altura * base)/2;
    return area;
}