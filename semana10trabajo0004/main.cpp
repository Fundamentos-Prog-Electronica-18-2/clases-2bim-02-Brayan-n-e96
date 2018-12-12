#include <iostream>

// generar una solucion que permita obtener el area de:
// un cuadrado
// un rectangulo
// y un circulo

using namespace std;
double obtenerAreaCuadrado(double a){
    double operacion = a*a;
    return operacion;
}

double obtenerAreaRectangulo(double a, double b){
    double operacion = a*b;
    return operacion;
}

double obtenerAreaCirculo(double a){
    double operacion = 3.1416 * (a*a);
    return operacion;
}

int main()
{
    int opcion = 0;
    double lado = 0;
    double base = 0;
    double altura = 0;
    double radio = 0;
    double resultado = 0;
    cout << "Ingrese la opcion: 1. cuadrado 2. rectangulo 3. circulo" << endl;
    cin >> opcion;
    if (opcion == 1){
        cout << "Ingrese el valor del lado del cuadrado" << endl;
        cin >> lado;
        resultado = obtenerAreaCuadrado(lado);
        cout << "El valor del area del cuadrado es: " << resultado << endl;
    }else{
        if(opcion == 2){
            cout << "Ingrese el valor de la base del rectangulo" << endl;
            cin >> base;
            cout << "Ingrese el valor de la altura del rectangulo" << endl;
            cin >> altura;
            resultado = obtenerAreaRectangulo(base, altura);
            cout << "El valor del area del rectangulo es: " << resultado << endl;
        }else{
            if(opcion==3){
                cout << "Ingrese el valor del radio del circulo" << endl;
                cin >> radio;
                resultado = obtenerAreaCirculo(radio);
                cout << "El valor del area del circulo es: " << resultado << endl;
            }else{
                cout << "existe un error en la opcion seleccionada" << endl;
            }
        }
    }
    return 0;
}
