#include <iostream>

using namespace std;

int main() {
    int numero, suma = 0, contador = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Numeros impares hasta " << numero << " son: " << endl;

    for (int i = 1; i <= numero; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
            suma += i;
            contador++;
        }
    }

    cout << "La suma de los numeros impares es: " << suma << endl;
    cout << "La cantidad de numeros impares es: " << contador << endl;

    return 0;
}
