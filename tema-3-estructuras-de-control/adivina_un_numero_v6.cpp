// Programa: Adivina un número
// Versión 6: Pedimos al usuario un dato hasta que acierta el número a adivinar o ha dicho 10 números; si no acierta, indicamos si es mayor o menor.
// Entrada: El dato que introduce el usuario
// Salida: muestra en pantalla el número que había que adivinar y si ha acertado o no

#include <iostream>
using namespace std;

int main() {
	int numero_a_adivinar = 12; 	// Declaración e inicialización de la variable
    int numero_del_usuario;
    int contador_de_numeros = 0;

    do {
        cout << "Intente adivinar el número que he pensado." << endl
            << "¿Qué número cree que es? ";

        cin >> numero_del_usuario;

        if( numero_a_adivinar==numero_del_usuario ) {
            cout << "¡Enhorabuena, ha acertado!" << endl;
        } else {
            if( numero_a_adivinar<numero_del_usuario) {
                cout << "No ha acertado. El número que debe adivinar es MENOR que el que ha dicho." << endl;
            } else {
                cout << "No ha acertado. El número que debe adivinar es MAYOR que el que ha dicho." << endl;
            }
        }
        ++contador_de_numeros;
    } while( numero_del_usuario!=numero_a_adivinar && contador_de_numeros<10);

    cout << endl << endl;

	return 0;
}
