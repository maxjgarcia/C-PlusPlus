#include <iostream>

/*
Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avi�n y la cantidad de pasajes ocupados
 y luego calcular e informar el porcentaje de ocupaci�n y el porcentaje de no ocupaci�n del mismo.
Ejemplo si el avi�n tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje de ocupaci�n que se informar� ser�
de un 40% y el porcentaje de no ocupaci�n ser� de un 60%.
*/

using namespace std;

int main(){
    int total_seats, pasangers, occupied, free;
    cout << "Ingresar la cantidad de asientos en el avion: ";
    cin >> total_seats;
    cout << "Ingresar la cantidad de pasajeros: ";
    cin >> pasangers;
    occupied = pasangers * 100 / total_seats;
    free = 100 - occupied;
    cout << "la cantidad ocupada es: %" << occupied << endl;
    cout << "la cantidad libre es: %" << free;
return 0;
}
