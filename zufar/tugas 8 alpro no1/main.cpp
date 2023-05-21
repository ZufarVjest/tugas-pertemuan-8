#include <iostream>
#include <vector>

//Nama : Muhammad Asyam Zufar
//Nim : A11.2022.14436

void cetakNilaiGenapTerkecil(const std::vector<int>& deret) {
    int nilaiGenapTerkecil = -1;  // Inisialisasi dengan nilai default
    int indeks = -1;

    // Mencari nilai genap terkecil dan indeksnya
    for (int i = 0; i < deret.size(); ++i) {
        if (deret[i] % 2 == 0) {
            if (nilaiGenapTerkecil == -1 || deret[i] < nilaiGenapTerkecil) {
                nilaiGenapTerkecil = deret[i];
                indeks = i;
            }
        }
    }

    // Mencetak nilai genap terkecil dan indeksnya
    if (indeks != -1) {
        std::cout << "Nilai genap terkecil: " << nilaiGenapTerkecil << std::endl;
        std::cout << "Indeks: " << indeks << std::endl;
    } else {
        std::cout << "Tidak ada nilai genap dalam deret." << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Masukkan jumlah elemen dalam deret: ";
    std::cin >> n;

    std::vector<int> deret(n);
    std::cout << "Masukkan elemen-lemen deret: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> deret[i];
    }

    cetakNilaiGenapTerkecil(deret);

    return 0;
}
