#include <iostream>
using namespace std;

// Definisi kelas "contoh"
class contoh {
private:
    int nilai; // Variabel anggota private untuk menyimpan nilai

public:
    // Constructor: dipanggil saat objek dibuat dan menginisialisasi variabel "nilai"
    contoh(int n) {
        nilai = n;
    }

    // Fungsi untuk mendapatkan nilai dari variabel anggota
    int getNum() {
        return nilai;
    }
};

int main() {
    // Membuat objek "obj" dari kelas "contoh" dengan nilai 10
    contoh obj(10);

    // Menampilkan nilai yang telah diinisialisasi melalui constructor
    cout << "Nilai yang diinput: " << obj.getNum() << endl;

    return 0;
}
