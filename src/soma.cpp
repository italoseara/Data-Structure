#include <iostream>
#include <stdlib.h>

int main() {
    int size, *array1, *array2;
    while (std::cin >> size) {
        array1 = (int*) malloc(sizeof(int) * size);
        array2 = (int*) malloc(sizeof(int) * size);

        // Read both arrays
        for (int i = 0; i < size; i++)
            std::cin >> array1[i];

        for (int i = 0; i < size; i++)
            std::cin >> array2[i];

        // Sum
        for (int i = 0; i < size; i++)
            std::cout << array1[i] + array2[size - i - 1] << " ";
        std::cout << std::endl;
    }
}