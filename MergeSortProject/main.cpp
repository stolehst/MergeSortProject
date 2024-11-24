#include <iostream>
#include "MergeSort.h"

// Główny punkt programu
int main() {
    std::vector<int> arr = { 38, 27, 43, 3, 9, 82, 10 };

    std::cout << "Tablica przed sortowaniem: ";
    for (const auto& num : arr) std::cout << num << " ";
    std::cout << std::endl;

    MergeSort::sort(arr);

    std::cout << "Tablica po sortowaniu: ";
    for (const auto& num : arr) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}