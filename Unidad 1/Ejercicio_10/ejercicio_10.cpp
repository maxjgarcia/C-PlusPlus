#include <iostream>

/*
Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla a cuantos d�as y horas equivalen.
Ejemplo A: si se ingresan 26 horas el programa mostrar� por pantalla que equivalen a 1 d�a y 2 horas.
Ejemplo B: si se ingresan 72 horas el programa mostrar� por pantalla que equivalen a 3 d�as y 0 horas.
Ejemplo C: si se ingresan 20 horas el programa mostrar� por pantalla que equivalen a 0 d�as y 20 horas.
*/

using namespace std;

int main(){

    int time, hours, days;

    cout << "Ingresar la cantidad de horas: ";
    cin >> time;

    days = time / 24;
    hours = time % 24;

    cout << "La cantidad ingresada equivale a " << days << " dias " << hours << " horas.";


return 0;
}
