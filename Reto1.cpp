#include <iostream>

using namespace std;

int main() {
    int N, suma = 0, i = 1;

    cout << "Ingrese un número N: ";
    cin >> N;

    while (i <= N) {
        suma += i;
        i++;
    }

    cout << "La suma de los números desde 1 hasta " << N << " es: " << suma << endl;

    return 0;
}
