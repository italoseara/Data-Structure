#include <iostream>
#include <stdlib.h>

void select_sort(int *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;

        for (int j = i; j < size; j++)
            if (array[j] < array[min])
                min = j;

        std::cout << min + 1 << " ";
        std::swap(array[i], array[min]);
    }

    std::cout << std::endl;
    return;
}

int main() {
    int size, *array;
    while (true) {
        std::cin >> size;
        if (size == 0) return 1;

        array = (int*) malloc(sizeof(int) * size);
        for (int i = 0; i < size; i++)
            std::cin >> array[i];

        select_sort(array, size);

        for (int i = 0; i < size; i++)
            std::cout << array[i] << " ";
        std::cout << std::endl << std::endl;
    }
}