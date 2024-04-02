#include <iostream>

int main() {
    int somme = 0, entree;

    for(int i = 0; i < 5; i++) {
        std::cout << "Entrez un entier: ";
        std::cin >> entree;
        somme += entree;
    }

    std::cout << "La moyenne est " << static_cast<double>(somme) / 5 << std::endl;

    return 0;
}