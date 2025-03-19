#include <iostream> 
using namespace std; 
int main() {
    
    double pendapatan = 500000;
    double uang_jasa = 10000;
    double uang_komisi = 50;
    double hasil_total = 0;

    cout << "Pendapatan Hari ini Rp. " << pendapatan << endl;

    if (uang_jasa > 0 && uang_komisi > 0) {
        hasil_total = uang_jasa + uang_komisi;
        cout << "Uang Jasa Rp. " << uang_jasa << endl;
        cout << "Uang Komisi Rp. " << uang_komisi << endl;
        cout << "===================================" << endl;
        cout << "Hasil Total Rp. " << hasil_total << endl;
    } else {
        cout << "Uang Jasa atau Uang Komisi tidak valid!" << endl;
    }

    cout << "\n-----------------------------------" << endl;
    

    return 0;
}
