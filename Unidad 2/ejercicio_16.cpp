#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones: 
- “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más. 
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes. 
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes. 
- “Recursa la materia”, si no aprobó ningún examen parcial. */

int main()
{
	int n1, n2,n3,n4;
	
	cout << "Ingrese la nota del examen 1: ";
cin >> n1;
    cout << "Ingrese la nota del examen 2: ";
    cin >> n2;
    cout << "Ingrese la nota del examen 3: ";
    cin >> n3;
    cout << "Ingrese la nota del examen 4: ";
    cin >> n4;
    
	if(n1 && n2 && n3 && n4 >= 7) cout<<"Promociona";
	
	else if((n1 >= 4) + (n2 >= 4) + (n3 >= 4) + (n4 >= 4) >= 3) cout<<"Rinde examen final";
	
	else if(n1 || n2 || n3 || n4 >= 4) cout<<"Recupera Parciales";
	
	else cout<<"Recursa la materia";
	
	
	return 0;
}









