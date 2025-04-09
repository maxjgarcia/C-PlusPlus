#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar un número de mes y listar por pantalla a qué trimestre corresponde ese mes. Tener en cuenta esta lista:
Mes 1, 2 y 3. Trimestre 1. Mes 4, 5 y 6. Trimestre 2. 
Mes 7, 8 y 9. Trimestre 3. Mes 10, 11 y 12. Trimestre 4.

Resolver este ejercicio utilizando la menor cantidad de salidas de IF posibles, de forma tal que si en un hipotético caso, hubiera años de 200 meses su diagrama no deba ser modificado en tal situación.

Recordar también que la división directa con el operador / genera un resultado con fracción. Por ejemplo si mes=7 y usted calcula trimestre=7/3 el resultado que obtendrá es trimestre= 2.33, lo cual es incorrecto. */

int main()
{
    int month, trimestre;
    
    
    cout<<"Ingrese numero de mes: "; cin>>month;
    //teniendo en cuenta que se se puedan tener 200 meses en un año como india el ejemplo.
    if (month>=1) {
        //evitar que numero negativo quede ordenaro en el trimestre incorrecto
        trimestre = (month + 2) / 3;
        cout << "Trimestre: " << trimestre;
    } else {
        cout << "No se ingresaron meses." << endl;
    }
    
    return 0;
    
}
