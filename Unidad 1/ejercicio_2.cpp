#include <iostream>

/*
Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos en dos variables distintas.
 A continuación se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.
Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B, entonces A=3 y B=8,
 pero luego debe quedar A=8 y B=3.
*/

using namespace std;

int main(){
    int a, b, c;

    cout << "Ingresar valor de A: ";
    cin >> a ;
    cout << "Ingresar valor de B: ";
    cin >> b;
    cout << "El valor de A es: " << a << endl;
    cout << "El valor de B es: " << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "Intercambiando los valores los nuevos valores son:" << endl;
    cout << " A : " << a << endl;
    cout << " B : " << b;


return 0;
}
