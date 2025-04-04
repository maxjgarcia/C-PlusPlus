#include <iostream>

/*
Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuántos días, horas y minutos equivalen.
Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día, 1 hora y 20 minutos.
Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día, 8 horas y 0 minutos.

*/

using namespace std;

int main(){

   int time, minutes, hours, days;

    cout << "Ingresar la cantidad de horas: ";
    cin >> time;

    days = (time / 60) / 24;
    hours = (time / 60) % 24;
    minutes =  time % 60;

    cout << "La cantidad ingresada equivale a " << days << " dias " << hours << " horas " << minutes << " minutos.";

return 0;
}
