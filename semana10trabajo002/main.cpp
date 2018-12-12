#include <iostream>

using namespace std;
// valor global
double saldo = 100;
//volid es un prosedimiento y no presenta nada
void sumarSaldo(double s){
    saldo = saldo + s;
}

void restarSaldo(double s){
    if(s < saldo){

        saldo = saldo - s;
        cout << saldo << endl;

    }else {
        cout<< " el saldo es insificiente "<<endl;
    }

}
string obtenerTipoCuenta(){
    string frace = "";

    if(saldo <= 100){
        frace = "su saldo le permite ser un cliente tipo D";
    }else{
        if((saldo >= 101)&(saldo <=1000)){
            frace = "us saldo le permite ser un cliente tipo C";
        }else{
            if((saldo >= 1001)&(saldo <=10000)){
                frace = "us saldo le permite ser un cliente tipo B";
            }else {
                frace = "us saldo le permite ser un cliente tipo A";
            }
        }
    }
    return frace;
}
int obtenerEdad(int a){
    int operacion = 2018 - a;
    return operacion;
}
int main()
{
    int opcion = 0;
    double ingreseValor = 0;
    int anioNacimiento = 0;
    cout <<"ingrese su año de nacimiento "<<endl;
    cin>> anioNacimiento;

    cout <<"ingrese la opcion 1 para sumar saldo y opcion 2 para restar saldo "<<endl;
    cin>> opcion;
    if (opcion == 1){
        cout<< " ingrese el valor a sumar "<<endl;
        cin>>ingreseValor;
        sumarSaldo(ingreseValor);
        cout << saldo << endl;
    }else{//para que no se esjecute el otro if a parte y no aya un erros y presente el if segundo
        if(opcion == 2){
        cout<< " ingrese el valor a restar "<<endl;
        cin>>ingreseValor;
        restarSaldo(ingreseValor);

        }else {
            cout<< "OPCION INCORRECTA no se modifica su saldo  "<<endl;
        }
    }
    //opcion 1
    string tipo = obtenerTipoCuenta();//es el que me da de que tipo es D, C B etc.
    cout << "hola su saldo es" << saldo <<endl
        <<tipo<<endl;

    int edad = obtenerEdad(anioNacimiento);
    cout << "su edad es" << edad <<endl;

    return 0;
}
