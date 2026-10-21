#include <iostream>
using namespace std;

int main() {
    int N, i = 1;

    cout << "Ingrese un número: ";
    cin >> N;

    while (i <= 10) {
        cout << N << " x " << i << " = " << N * i << endl;
        i++;
    }

    return 0;
}
