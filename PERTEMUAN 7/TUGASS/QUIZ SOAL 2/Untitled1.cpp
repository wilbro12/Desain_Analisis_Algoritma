#include <iostream>
#include <string>
using namespace std;

class Buku {
private:
    string judul;
    string pengarang;
    int tahunTerbit;

public:
    
    Buku(string j = "", string p = "", int t = 0) {
        judul = j;
        pengarang = p;
        tahunTerbit = t;
    }


    ~Buku() {
        cout << "Objek buku \"" << judul << "\" dihapus." << endl;
    }

    
    string getJudul() const { return judul; }
    string getPengarang() const { return pengarang; }
    int getTahunTerbit() const { return tahunTerbit; }

    
    void tampilkanData() const {
        cout << "Judul       : " << judul << endl;
        cout << "Pengarang   : " << pengarang << endl;
        cout << "Tahun Terbit: " << tahunTerbit << endl;
    }
};

int main() {
    const int jumlah = 5;
    Buku daftarBuku[jumlah] = {
        Buku("Laskar Pelangi", "Andrea Hirata", 2005),
        Buku("Bumi", "Tere Liye", 2014),
        Buku("Negeri 5 Menara", "Ahmad Fuadi", 2009),
        Buku("Dilan", "Pidi Baiq", 2014),
        Buku("Ayat-Ayat Cinta", "Habiburrahman El Shirazy", 2004)
    };

    string inputJudul;
    cout << "Masukkan judul buku yang ingin dicari: ";
    getline(cin, inputJudul);

    bool ditemukan = false;
    for (int i = 0; i < jumlah; ++i) {
        if (daftarBuku[i].getJudul() == inputJudul) {
            cout << "\nBuku ditemukan:\n";
            daftarBuku[i].tampilkanData();
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "\nBuku tidak ditemukan.\n";
    }

    return 0;
}
