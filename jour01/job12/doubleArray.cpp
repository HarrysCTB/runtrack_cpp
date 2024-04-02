#include <iostream>

int doubleArray(int* arr, int size) {
    int* ptr = arr;
    int sum = 0;

    for (int i = 0; i < size; i++) {
        *ptr *= 2;
        sum += *ptr;
        ptr++;
    }

    return sum;
}

void printArray(int* arr, int size) {
    int* ptr = arr;

    for (int i = 0; i < size; i++) {
        std::cout << *ptr << " ";
        ptr++;
    }

    std::cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = doubleArray(arr, size);

    std::cout << "La somme des éléments doublés est: " << sum << std::endl;

    std::cout << "Les éléments du tableau après les avoir doublés sont: ";
    printArray(arr, size);

    return 0;
}