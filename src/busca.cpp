#include <iostream>
#include <stdlib.h>


int linear_search(int *array, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) return i;
    }
    return -1;
}

int main() {
    while (true) {
        // Read the size of the array
        int size;
        std::cin >> size;
        if (size == 0) return 1;

        // Get the array in the next line
        int *array = (int*) malloc(sizeof(int) * size);
        for (int i = 0; i < size; i++) {
            std::cin >> array[i];
        }

        // Get the number of searches
        int searches;
        std::cin >> searches;

        // Search for the number
        for (int i = 0; i < searches; i++) {
            int target;
            std::cin >> target;

            int result = linear_search(array, size, target);

            if (result == -1) {
                std::cout << "NAO" << std::endl;
            } else {
                std::cout << result + 1 << std::endl;
            }
        }

        std::cout << " " << std::endl;
    }
}