#include <iostream>

using namespace std;

int main() {
    int contador = 0;
    int numero = 1;

    while (numero <= 100) {
        if (numero % 2 == 0) {
            contador++;
        }
        numero++;
    }

    cout << "Hay " << contador << " números pares entre 1 y 100." << endl;

    return 0;
}
