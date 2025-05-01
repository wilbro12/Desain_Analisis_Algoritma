#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Mahasiswa {
private:
    string nama;
    string nim;
    float nilai;

public:
    
    void setNama(string n) { nama = n; }
    void setNIM(string n) { nim = n; }
    void setNilai(float n) { nilai = n; }

    
    string getNama() const { return nama; }
    string getNIM() const { return nim; }
    float getNilai() const { return nilai; }
};


bool bandingkanNilai(const Mahasiswa& a, const Mahasiswa& b) {
    return a.getNilai() > b.getNilai();
}

int main() {
    int jumlah = 5;
    vector<Mahasiswa> daftar;

    for (int i = 0; i < jumlah; ++i) {
        Mahasiswa m;
        string nama, nim;
        float nilai;

        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama: ";
        getline(cin >> ws, nama);
        cout << "NIM: ";
        getline(cin, nim);
        cout << "Nilai: ";
        cin >> nilai;

        m.setNama(nama);
        m.setNIM(nim);
        m.setNilai(nilai);

        daftar.push_back(m);
    }

    sort(daftar.begin(), daftar.end(), bandingkanNilai);

    cout << "\nDaftar Mahasiswa setelah diurutkan berdasarkan nilai (descending):\n";
    for (size_t i = 0; i < daftar.size(); ++i) {
        cout << "Nama: " << daftar[i].getNama()
             << ", NIM: " << daftar[i].getNIM()
             << ", Nilai: " << daftar[i].getNilai() << endl;
    }

    return 0;
}
