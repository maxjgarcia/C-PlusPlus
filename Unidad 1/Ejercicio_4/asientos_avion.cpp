#include <iostream>

/*
Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión y la cantidad de pasajes ocupados
 y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.
Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje de ocupación que se informará será
de un 40% y el porcentaje de no ocupación será de un 60%.
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
