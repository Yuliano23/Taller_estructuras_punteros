#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct competidor{
char nombre[30];
int edad;
char sexo;
char club[10];
};

competidor concursante;

int main(){
cout<<"\tcompetidores\n";
cout<<"digite nombre\n";
    cin.getline(concursante.nombre,30);
    cin.ignore(256,'\n');


    cout<<"ingrese sexo, masculino= m, femenino= f\n";
    cin>> concursante.sexo;
    cin.ignore(256,'\n');

    cout<<"\ningrese el club\n";
    cin.getline (concursante.club,10);
    cin.ignore (256,'\n');

    cout<<"ingrese edad\n";
    cin>> concursante.edad;


    system ("cls");

    cout<<"\tdatos del participante\n";
    cout<<"los datos del participante son:\n";

    cout<<"nombre: "<<concursante.nombre<<"\n";
    cout<<"sexo: "<<concursante.sexo<<"\n";
    cout<<"edad: "<<concursante.edad<<"\n";
    cout<<"club: "<<concursante.club<<"\n";

    if(concursante.edad <=15)
    {
    cout<<"Categoria de Competicion: Infantil\n";
    }else{
        if (concursante.edad >15 && concursante.edad <=30)
        {
        cout<<"Categoria de Competicion: Joven\n";
        }else{
            if (concursante.edad >30)
            {
            cout<<"Categoria de Competicion: Adulto\n";
            }
             }
        }

    return 0;
}



