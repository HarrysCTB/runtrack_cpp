#include <iostream>

int findMin(int** arr, int size) {
    int** ptr = arr;
    int min = **ptr;

    for (int i = 0; i < size; i++) {
        if (**ptr < min) {
            min = **ptr;
        }
        ptr++;
    }

    return min;
}

int main() {
    int a = 10, b = 20, c = 30, d = 1, e = 40, f = 50;
    int* arr[] = {&a, &b, &c, &d, &e, &f};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = findMin(arr, size);

    std::cout << "Le plus petit élément du tableau est: " << min << std::endl;

    return 0;
}