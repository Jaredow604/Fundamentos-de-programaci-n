
#include <iostream>

using namespace std;

int main()
{
    const int numerodedatos=5;
    char nombres[numerodedatos][100];
    int enteros[numerodedatos];
    float floats[numerodedatos];
    
    for (int i=0; i<numerodedatos ;i++){
        cout<< "ingresa el nombre"<< i+1 << ":";
        cin>> nombres[i];
    }
    
    for (int i=0; i<numerodedatos ;i++){
        cout<< "ingresa un numero con decimales"<< i+1 << ":";
        cin>> floats[i];
    }
    
    for (int i=0; i<numerodedatos ;i++){
        cout<< "ingresa un numero entero"<< i+1 << ":";
        cin>> enteros[i];
    }
    cout<< "Nombres ingresados"<< endl;
    for (int i=0; i<numerodedatos ;i++){
        cout<< nombres[i]<< endl;}
    
    cout<< "Numeros con decimales ingresados"<< endl;
    for (int i=0; i<numerodedatos ;i++){
        cout<< floats[i]<< endl;}    
    
    cout<< "Numeros enteros ingresados"<< endl;
    for (int i=0; i<numerodedatos ;i++){
        cout<< enteros[i]<< endl;}

    return 0;
}
