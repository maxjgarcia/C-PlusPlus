#include <iostream>

/*
Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar por teclado la cantidad de alfajores
vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.

Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.
*/

using namespace std;

int main(){
    int a, b, c, total_ammount;
    float  p_a, p_b, p_c;
    cout << "ingresar la cantidad de alfajores A: ";
    cin >> a;
    cout << "ingresar la cantidad de alfajores B: ";
    cin >> b;
    cout << "ingresar la cantidad de alfajores C: ";
    cin >> c;
    total_ammount = a + b + c;
    p_a = (float)a / total_ammount * 100;
    p_b = (float)b / total_ammount * 100;
    p_c = (float)c / total_ammount * 100;
    cout << "porcentajes : "<< endl;
    cout << "A: " << p_a << "%" << endl;
    cout << "B: " << p_b << "%" << endl;
    cout << "C: " << p_c << "%" << endl;
return 0;
}
