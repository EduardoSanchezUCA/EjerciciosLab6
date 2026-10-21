#include <iostream>

using namespace std;

int main() {
    int opcion;
    double saldo = 0.0, monto;

    do {
        cout << "Menú de opciones:" << endl;
        cout << "1. Depositar" << endl;
        cout << "2. Retirar" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el monto a depositar: ";
                cin >> monto;
                saldo += monto;
                cout << "Depósito exitoso. Saldo actual: $" << saldo << endl;
                break;
            case 2:
                cout << "Ingrese el monto a retirar: ";
                cin >> monto;
                if (monto <= saldo) {
                    saldo -= monto;
                    cout << "Retiro exitoso. Saldo actual: $" << saldo << endl;
                } else {
                    cout << "Saldo insuficiente." << endl;
                }
                break;
            case 3:
                cout << "Saliendo del cajero..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (opcion != 3);

    return 0;
}
