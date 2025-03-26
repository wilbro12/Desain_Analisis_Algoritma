#include <iostream>
#include <string>

using namespace std;

class Buku {
private:
    string judul;

public:
    
    Buku(string j) {
        judul = j;
        cout << "Buku " << judul << " ditambahkan." << endl;
    }

   
    ~Buku() {
        cout << "Buku " << judul << " dihapus." << endl;
    }
};

int main() {
    string namaBuku;
    cout << "Masukkan judul buku: ";
    getline(cin, namaBuku);

    Buku myBook(namaBuku); 

    return 0; 
}
