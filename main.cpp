/*
Programa_46

funciones sin parametros.
prototipos, variables globales.

Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 16 de abril de 2015
*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void suma (); // prototipo
void resta (); // prototipo

int x,y,z; // variables globales

int main()
{
    cout << "\n\t\aPrograma de suma y resta" << endl;
    cout<<"\n\n\tDame un numero: ";
    cin>>x;
    cout<<"\n\n\tDame un numero: ";
    cin>>y;

    suma();
    resta();

    cout<<"\n\n\t\t\t";
    system ("pause");

    return 0;
}

void suma()
{
cout<<"\n\tLa suma \n";
z=x+y;
cout<<"\n\n\tLa suma es:      "<<z;

cout<<"\n\n\t\t\t";
system ("pause");
}

void resta()
{
cout<<"\n\tLa resta \n";
z=x-y;
cout<<"\n\n\tLa resta es:     "<<z;
cout<<"\n\n\t\t\t";
system ("pause");
}
