#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Multiplos de 5 hasta " << numero << " son: " << endl;

    for (int i = 1; i <= numero; i++) {
        if (i % 5 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
