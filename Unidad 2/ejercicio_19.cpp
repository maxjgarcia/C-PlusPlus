#include <iostream>

using namespace std;

/*
Este ejercicio lo resolverán en la parte de código de la materia.
El costo de un desarrollo de un proyecto de software se calcula en base al lenguaje que se necesita: 

Nombre
Tipo
Valor hora
C/C++
'C'
$ 7500
C#
'#'
$ 6100
Python
'P'
$ 5400
Go
'G'
$ 5000


Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más al costo del proyecto. 
Le solicitan un programa que permita calcular el costo total de un proyecto basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o no (bool) */

int main()
{
   
    float rate, hours;
    char select;
    bool urgent;
    
    cout << "Ingrese cantidad de horas: "; cin>>hours;
    cout << "Ingrese lenguaje C (C/C++) S (C#) P (Python) G (Go): "; cin>>select;
    cout << "Es urgente? (1 para si, 0 para no): "; cin>>urgent;
    
    switch(select){
    case 'C': rate = hours * 7500 ; break;
    case 'S': rate = hours * 6100 ; break;
    case 'P': rate = hours * 5400 ; break;
    case 'G': rate = hours * 5000 ; break;
    default: cout << "Seleccion invalida" << endl;
    return 0;
    }
   
    if (urgent){
        rate = rate * 2.2;
    }
    
    cout<<"Monto final a pagar: $"<< rate;

    return 0;
}





















