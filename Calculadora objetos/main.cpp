#include <iostream>
#include "calculadora.hpp"
using namespace std;

int main() {
    calculadora miCalculadora;

    int opcion, a, b;
    char seguir = 's';

    while (seguir == 's' || seguir == 'S') {
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "Seleccione una operacion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                miCalculadora.sumar(a, b);
                break;
            case 2:
                miCalculadora.restar(a, b);
                break;
            case 3:
                miCalculadora.multiplicar(a, b);
                break;
            case 4:
                miCalculadora.dividir(a, b);
                break;
            default:
                cout << "Opcion no válida" << endl;
                break;
        }

        cout << "¿Desea realizar otra operacion? (s/n): ";
        cin >> seguir;
    }

    return 0;
}
