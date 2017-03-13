#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define ct 50

using namespace std;

struct trabajador
{
    char nombre[30];
    int edad;
    int salario;

};trabajador nomina[ct];

int main()
{
    int mayor,menor,a,b,seguir;
    int nt=0;
    while (seguir !=0)
    {

        cout<<"\ningrese Nombre del Trabajador:\n ";
            cin>>nomina[nt].nombre,30;

        cout<<"\ningrese Edad:\n ";
            cin>>nomina[nt].edad;

        cout<<"\ningrese Salario:\n ";
            cin>>nomina[nt].salario;

        cout<<"\n¿Registrar mas Trabajadores? 1-(SI) o 0-(NO)\n";
            cin>>seguir;
        if(seguir==1)
        {   nt++;    }else{  seguir==0;    }
    }

    mayor=nomina[0].salario;
    menor=nomina[0].salario;

    for (int i=0; i<nt; i++){
        if (nomina[i].salario> mayor){
            mayor=nomina[i].salario;a=i;
        }else{
            if (nomina[i].salario<menor){
                menor=nomina[i].salario;b=i;
            }
        }
    }

    cout<<"\nel trabajador con Mayor salario es: \n";
    cout<<"\nNombre: "<<nomina[a].nombre;
    cout<<"\nEdad: "<<nomina[a].edad;
    cout<<"\nSalario: "<<nomina[a].salario;

    cout<<"\nel trabajador con Menor salario es: \n";
    cout<<"\nNombre: "<<nomina[b].nombre;
    cout<<"\nEdad: "<<nomina[b].edad;
    cout<<"\nSalario: "<<nomina[b].salario;

    return 0;
    system("pause");
}
