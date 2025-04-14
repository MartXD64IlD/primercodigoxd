#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Inicializa el generador de números aleatorios

    string opciones[] = {"Piedra", "Papel", "Tijera"};
    int eleccionUsuario, eleccionComputadora;

    cout << "¡Bienvenido al juego de Piedra, Papel o Tijera!\n";
    cout << "Por favor, elige una opción:\n";
    cout << "1. Piedra\n2. Papel\n3. Tijera\n";
    cout << "Ingresa el número de tu elección: ";
    cin >> eleccionUsuario;
    
    if (eleccionUsuario < 1 || eleccionUsuario > 3) {
        cout << "Elección no válida. Inténtalo de nuevo.\n";
        return 1;
    }

    eleccionComputadora = rand() % 3 + 1;

    cout << "Tú elegiste: " << opciones[eleccionUsuario - 1] << endl;
    cout << "La computadora eligió: " << opciones[eleccionComputadora - 1] << endl;

    if (eleccionUsuario == eleccionComputadora) {
        cout << "¡Es un empate!\n";
    } else if ((eleccionUsuario == 1 && eleccionComputadora == 3) || 
               (eleccionUsuario == 2 && eleccionComputadora == 1) || 
               (eleccionUsuario == 3 && eleccionComputadora == 2)) {
        cout << "¡Ganaste!\n";
    } else {
        cout << "Perdiste. ¡Suerte la próxima vez!\n";
    }

    return 0;
}