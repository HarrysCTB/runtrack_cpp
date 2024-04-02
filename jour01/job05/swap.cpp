#include <iostream>

int main() {
    int n, m, temp;

    std::cout << "Entrez le premier entier (n): ";
    std::cin >> n;

    std::cout << "Entrez le deuxième entier (m): ";
    std::cin >> m;

    std::cout << "Avant l'échange: n = " << n << ", m = " << m << std::endl;

    temp = n;
    n = m;
    m = temp;

    std::cout << "Après l'échange: n = " << n << ", m = " << m << std::endl;

    return 0;
}