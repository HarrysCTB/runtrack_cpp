#include <iostream>

int main() {
    int annee;

    std::cout << "Entrez une année: ";
    std::cin >> annee;

    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        std::cout << "L'année " << annee << " est bissextile." << std::endl;
    } else {
        std::cout << "L'année " << annee << " n'est pas bissextile." << std::endl;
    }

    return 0;
}