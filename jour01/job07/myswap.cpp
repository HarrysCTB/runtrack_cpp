#include <iostream>

int main() {
    int nombre, nombreInverse = 0;

    std::cout << "Entrez un nombre: ";
    std::cin >> nombre;

    while (nombre != 0) {
        int chiffre = nombre % 10;
        nombreInverse = nombreInverse * 10 + chiffre;
        nombre /= 10;
    }

    std::cout << "Le nombre inversé est: " << nombreInverse << std::endl;

    return 0;
}