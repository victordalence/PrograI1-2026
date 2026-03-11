// Materia: Programación I, Paralelo 4
// Autor: Victor Guillermo Dalence Deheza
// Carnet: 12420464
// Fecha creación: 10/03/2026

#include <iostream>
using namespace std;
//prototipo de la función
double volumen_cilindro(double radio, double altura);
int main()
{
    system("cls");
    double radio, altura;
    cout<<"ingrese el radio de su cilindro: ";
    cin>>radio;
    cout<<endl<<"ingrese la altura de su cilindro: ";
    cin>>altura;
    cout<<endl<<" aqui esta el volumen de su cilindro; "<<volumen_cilindro(radio, altura);
}
double volumen_cilindro(double radio, double altura)
{
    double pi=3.14;
    double volumen;
    volumen=radio*radio*pi*altura;
    return volumen;
}