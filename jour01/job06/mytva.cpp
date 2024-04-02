#include <iostream>

int main() {
    double prixHT, kilos, tauxTVA, prixTTC;

    std::cout << "Entrez le prix HT d'un kilo de carottes: ";
    std::cin >> prixHT;

    std::cout << "Entrez le nombre de kilos de carottes: ";
    std::cin >> kilos;

    std::cout << "Entrez le taux de TVA (ex: 15 pour 15%): ";
    std::cin >> tauxTVA;

    prixTTC = prixHT * kilos * (1 + tauxTVA / 100);

    std::cout << "Le prix TTC de la marchandise est: " << prixTTC << std::endl;

    return 0;
}