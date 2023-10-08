
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int base;
    int altura;
    int radio;
    int lado;
    float pi = 3.14159265359;
    while(true){
            cout << "Hola! puedo calcular el área de tres figuras distintas, triángulo, círculo y cuadrado." << endl;
            cout << "Selecciona una figura" << endl;
            cout << "1. Triángulo\n2. Círculo\n3. Cuadrado\n";
        
            int opcion;
            cin >> opcion;
        
            if (opcion == 1) {
                cout << "Ingresa la altura del triángulo" << endl;
                cin >> altura;
                cout << "Ingresa la base del triángulo" << endl;
                cin >> base;
                int AreaDeTriangulo = (base * altura) / 2;
                cout << "El área de tu triángulo es: " << AreaDeTriangulo << endl;
            } else if (opcion == 2) {
                cout << "Ingresa el radio del círculo" << endl;
                cin >> radio;
                float AreaDeCirculo = pi * pow(radio, 2);
                cout << "El área de tu círculo es: " << AreaDeCirculo << endl;
            } else if (opcion == 3) {
                cout << "Ingresa la medida de uno de los lados del cuadrado" << endl;
                cin >> lado;
                int AreaDeCuadrado = lado * lado;
                cout << "El área de tu cuadrado es: " << AreaDeCuadrado << endl;
            }else if (opcion == 4){
                break;
            }else{
                cout<< "opcion no valida, ingresa una opcion válida";
            }
    }   
    return 0;
     
}