#include <iostream>
#include "calculadora.hpp"
using namespace std;

void calculadora::sumar(float a, float b) {
    _a = a;
    _b = b;
    cout << "Inserte primer valor: ";
    cin >> a;
    cout << "Inserte segundo valor: ";
    cin >> b;
    cout << "El resultado es: " << a + b << endl;
}

void calculadora::restar(float a, float b) {
    _a = a;
    _b = b;
    cout << "Inserte primer valor: ";
    cin >> a;
    cout << "Inserte segundo valor: ";
    cin >> b;
    cout << "El resultado es: " << a - b << endl;
}

void calculadora::multiplicar(float a, float b) {
    _a = a;
    _b = b;
    cout << "Inserte primer valor: ";
    cin >> a;
    cout << "Inserte segundo valor: ";
    cin >> b;
    cout << "El resultado es: " << a * b << endl;
}

void calculadora::dividir(float a, float b) {
    _a = a;
    _b = b;
    cout << "Inserte primer valor: ";
    cin >> a;
    cout << "Inserte segundo valor: ";
    cin >> b;
    if (b == 0) {
        cout << "División por 0" << endl;
    } else {
        cout << "El resultado es: " << a / b << endl;
    }
}
