#include <iostream>


//Nama : Muhammad Asyam Zufar
//Nim : A11.2022.14436

// Metode Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                // Menukar posisi elemen jika urutan salah
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Metode Selection Sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int maxIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        // Menukar elemen maksimum dengan elemen pada indeks i
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 2, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Pengurutan menggunakan Bubble Sort
    bubbleSort(arr, size);
    std::cout << "Array setelah diurutkan dengan Bubble Sort: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Pengurutan menggunakan Selection Sort
    selectionSort(arr, size);
    std::cout << "Array setelah diurutkan dengan Selection Sort: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
