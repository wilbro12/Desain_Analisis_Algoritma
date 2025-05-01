#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Buku {
    string judul;
    int rak;
};


int binarySearch(Buku data[], int jumlah, string target) {
    int kiri = 0, kanan = jumlah - 1;
    while (kiri <= kanan) {
        int tengah = (kiri + kanan) / 2;
        if (data[tengah].judul == target) {
            return tengah;
        } else if (data[tengah].judul < target) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }
    return -1;
}

int main() {
    
    Buku daftarBuku[] = {
        {"Algoritma dan Pemrograman", 1},
        {"Basis Data", 2},
        {"Jaringan Komputer", 5},
        {"Kalkulus Dasar", 3},
        {"Struktur Data", 4}
    };

    int jumlahBuku = sizeof(daftarBuku) / sizeof(daftarBuku[0]);


    sort(daftarBuku, daftarBuku + jumlahBuku, [](Buku a, Buku b) {
        return a.judul < b.judul;
    });

    string judulCari;
    cout << "Masukkan judul buku yang dicari: ";
    getline(cin, judulCari);

    int hasil = binarySearch(daftarBuku, jumlahBuku, judulCari);

    if (hasil != -1) {
        cout << "Buku ditemukan di rak nomor: " << daftarBuku[hasil].rak << endl;
    } else {
        cout << "Buku tidak ditemukan dalam database." << endl;
    }

    return 0;
}
