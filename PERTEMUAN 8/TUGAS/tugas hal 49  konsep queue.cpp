#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> antrian;
    int pilihan;
    string nama;

    do {
        cout << "\n=== ANTRIAN LOKET TIKET ===" << endl;
        cout << "1. Tambah Antrian" << endl;
        cout << "2. Panggil Antrian" << endl;
        cout << "3. Lihat Antrian" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama pelanggan: ";
                cin.ignore(); // membersihkan buffer newline
                getline(cin, nama);
                antrian.push(nama);
                cout << "Pelanggan \"" << nama << "\" ditambahkan ke antrian." << endl;
                break;

            case 2:
                if (!antrian.empty()) {
                    cout << "Memanggil pelanggan: " << antrian.front() << endl;
                    antrian.pop();
                } else {
                    cout << "Antrian kosong!" << endl;
                }
                break;

            case 3:
                if (antrian.empty()) {
                    cout << "Tidak ada antrian." << endl;
                } else {
                    cout << "Daftar antrian:" << endl;
                    queue<string> temp = antrian;
                    int nomor = 1;
                    while (!temp.empty()) {
                        cout << nomor++ << ". " << temp.front() << endl;
                        temp.pop();
                    }
                }
                break;

            case 4:
                cout << "Terima kasih. Program selesai." << endl;
                break;

            default:
                cout << "Pilihan tidak valid." << endl;
        }

    } while (pilihan != 4);

    return 0;
}
