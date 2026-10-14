#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Cuenta regresiva desde " << numero << " hasta 0:" << endl;

    for (int i = numero; i >= 0; i--) {
        cout << i << endl;
    }

    return 0;
}
