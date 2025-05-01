#include <iostream>
using namespace std;

int main() {
    int arr[] = {6, 8, 13, 18, 28};
    int jumlah = sizeof(arr) / sizeof(arr[0]);
    int dataDicari;
    
    cout << "Masukkan data yang dicari: ";
    cin >> dataDicari;
    
    int L = 0;
    int R = jumlah - 1;
    int mid;
    bool ditemukan = false;

    while (L <= R) {
        mid = (L + R) / 2;
        if (arr[mid] == dataDicari) {
            cout << "Bilangan ditemukan\n";
            ditemukan = true;
            break;
        } else if (arr[mid] < dataDicari) {
            L = mid + 1;
        } else {
            R = mid - 1;
        }
    }

    if (!ditemukan) {
        cout << "Bilangan tidak ditemukan...\n";
    }

    return 0;

