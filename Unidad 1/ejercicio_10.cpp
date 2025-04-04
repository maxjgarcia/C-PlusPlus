#include <iostream>

/*
Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla a cuantos días y horas equivalen.
Ejemplo A: si se ingresan 26 horas el programa mostrará por pantalla que equivalen a 1 día y 2 horas.
Ejemplo B: si se ingresan 72 horas el programa mostrará por pantalla que equivalen a 3 días y 0 horas.
Ejemplo C: si se ingresan 20 horas el programa mostrará por pantalla que equivalen a 0 días y 20 horas.
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
