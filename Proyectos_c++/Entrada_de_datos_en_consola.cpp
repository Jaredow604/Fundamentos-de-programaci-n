#include <iostream>
#include <string>
using namespace std;

int main() {
    int numeroentero;
    float numerodecimal;
    char letra;
    string nombre;
    
    cout << "Dame un número del 1 al 10: ";
    cin >> numeroentero;
    
    cout << "Dame un número con dos decimales: ";
    cin >> numerodecimal;

    cin.ignore();  // Consume el carácer anterior, para dejar que escaneé el char

    cout << "Dame una letra: ";
    cin >> letra;

    cout << "Dame tu nombre: ";
    cin.ignore();  // Consume el carácer anterior, para dejar que escaneé el char
    getline(cin, nombre);

    if (numeroentero >= 1 && numeroentero <= 10) {
        cout << "Tu número es: " << numeroentero << endl;
    } else {
        cout << "Tu número no es válido" << endl;
    }
    
    cout << "Tu número con decimales es: " << numerodecimal << endl;
    cout << "Tu letra es: " << letra << endl;
    cout << "Tu nombre es: " << nombre << endl;

    return 0;
}