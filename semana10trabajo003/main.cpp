#include <iostream>
// obtener el cuadrado y el cubo de un numero ingresado por el usuario

using namespace std;

int obtenerCuadrado(int o){
    int operacion = o * o;
    return operacion;
}
int obtenerCubo(int o){
    int operacion = o * o * o;
    return operacion;
}
int main()
{
    double numero = 0;
    int opcion = 0;
    int resultado = 0;
    cout << "Ingrese un numero para operar" << endl;
    cin >> numero;

    cout << "Ingrese 1 para el cudrado y 2 para cubo " << endl;
    cin>> opcion;

    if (opcion == 1){
        resultado = obtenerCuadrado(numero);
        cout << "El cuadrado del numero " << numero << "es :" << resultado << endl;
    }else{
        if (opcion == 2){
            resultado = obtenerCubo(numero);
            cout << "El cubo del numero " << numero << "es :" << resultado << endl;
        }else{
            cout << "Opción incorrecta "<< endl;
        }
    }

    return 0;
}
