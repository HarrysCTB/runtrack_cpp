#include <iostream>
#include <cmath>

int main() {
    int N;
    std::cout << "Veuillez entrer un entier N: ";
    std::cin >> N;

    long long sum = 0;
    for (int i = 5; i <= N; i++) {
        sum += std::pow(i, 3);
    }

    std::cout << "La somme des cubes de 5^3 à N^3 est: " << sum << std::endl;

    return 0;
}