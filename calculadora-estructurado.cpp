#include <iostream>
using namespace std;

void sumar();
void restar();
void dividir();
void multiplicar();
void menu();

int main(){
    menu();
    return 0;
}

void menu()
{
    int opcion;
    cout << "Elija una opcion (1-5): " << endl;
    cout << "1. suma" << endl;
    cout << "2. resta" << endl;
    cout << "3. multiplicacion" << endl;
    cout << "4. division" << endl;
    cout << "5. salir" << endl;
    cin >> opcion;
    
    do {
        switch(opcion) {
            case 1:
                sumar();
                break;
            case 2:
                restar();
                break;
            case 3:
                multiplicar();
                break;
            case 4:
                dividir();
                break;
            case 5:
                cout << "Saliendo" << endl;
                break;
            default:
                cout << "Opcion no valida. ingrese un numero entre 1 y 5" << endl;
        }
    } while(opcion != 5);
}

void sumar()
{
    int a;
    int b;
    cout << "inserte el primer numero" << endl;
    cin >> a;
    cout << "inserte el  segundo numero" << endl;
    cin >> b;
    cout <<"resultado =" << a+b << endl;
}

void restar()
{
    int a;
    int b;
    cout << "inserte el primer numero" << endl;
    cin >> a;
    cout << "inserte el  segundo numero" << endl;
    cin >> b;
    cout <<"resultado =" << a-b << endl;
}

void multiplicar()
{
    int a;
    int b;
    cout << "inserte el primer numero" << endl;
    cin >> a;
    cout << "inserte el  segundo numero" << endl;
    cin >> b;
    cout <<"resultado =" << a*b << endl;
}

void dividir()
{
    int a;
    int b;
    cout << "inserte el primer numero" << endl;
    cin >> a;
    cout << "inserte el  segundo numero" << endl;
    cin >> b;
    if(b!=0) cout <<"resultado =" << a/b << endl; 
    else cout << "division por cero" << endl;
}