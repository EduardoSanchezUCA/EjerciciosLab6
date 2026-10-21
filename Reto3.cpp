#include <iostream>
using namespace std;

int main() {
    string contraseña;
    const string contraseñaCorrecta = "secreta123";

    do {
        cout << "Ingrese la contraseña: ";
        cin >> contraseña;

        if (contraseña != contraseñaCorrecta) {
            cout << "Contraseña incorrecta. Intente nuevamente." << endl;
        }
    } while (contraseña != contraseñaCorrecta);

    cout << "Contraseña correcta. Acceso permitido." << endl;

    return 0;
}
