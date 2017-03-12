#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define c_almn 3

struct alumno{
char nombre[30];
int edad, grado, promedio;
};

alumno estudiante[c_almn];

int main(){

int a,mayor,x;
float m[c_almn];

cout<<"registro de estudiantes\n";
for (int i=0; i<c_almn; i++)
    {
    cout<<"ingrese nombre\n";
    cin>>estudiante[i].nombre,30;


    cout<<"ingrese edad\n";
    cin>>estudiante[i].edad;

    cout<<"ingrese grado\n";
    cin>>estudiante[i].grado;

    cout<<"ingrese el promedio\n";
    cin>>estudiante[i].promedio;
    }
    mayor=estudiante[0].promedio;

    for (int i=0; i<c_almn; i++){

        if (estudiante[i].promedio> mayor){
            mayor=estudiante[i].promedio;x=i;
        }
    }

    cout<<"\nLos datos del estudiande con mayor promedio son: \n";
    cout<<"\nNombre: "<<estudiante[x].nombre;
    cout<<"\nEdad: "<<estudiante[x].edad;
    cout<<"\nGrado: "<<estudiante[x].grado;
    cout<<"\nPromedio: "<<estudiante[x].promedio;
    cout<<"\n\n";
    system("pause");
    return 0;
}



