#include <iostream>

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    std::cout << "Avant l'échange: x = " << x << ", y = " << y << std::endl;

    swapValues(x, y);

    std::cout << "Après l'échange: x = " << x << ", y = " << y << std::endl;

    return 0;
}