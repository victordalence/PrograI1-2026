// Materia: Programación I, Paralelo 4
// Autor: Victor Guillermo Dalence Deheza
// Carnet: 12420464
// Fecha creación: 10/03/2026

#include <iostream>
using namespace std;
//prototipo de la función
double distancia(double velocidad, double tiempo);
int main()
{
    system("cls");
    double velocidad, tiempo;
    cout<<"ingrese la velocidad constante (m/s) en la que se mueve su particula: ";
    cin>>velocidad;
    cout<<endl<<"ahora ingrese el tiempo en segundos: ";
    cin>>tiempo;
    cout<<endl<<"aqui esta la distancia recorrida por la particula: "<<distancia(velocidad, tiempo)<<" metros";

}
double distancia(double velocidad, double tiempo)
{
    double distancia;
    distancia=velocidad*tiempo;
    return distancia;
}