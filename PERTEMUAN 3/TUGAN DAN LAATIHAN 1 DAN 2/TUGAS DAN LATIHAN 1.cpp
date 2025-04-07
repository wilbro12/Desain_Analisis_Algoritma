#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen dalam array
void swap(int arr[], int pos1, int pos2) {
    int temp;
    temp = arr[pos1];         // Simpan nilai arr[pos1] di temp
    arr[pos1] = arr[pos2];    // Ganti nilai arr[pos1] dengan arr[pos2]
    arr[pos2] = temp;         // Ganti nilai arr[pos2] dengan nilai temp
}

// Fungsi partition untuk mempartisi array berdasarkan pivot
int partition(int arr[], int low, int high, int pivot) {
    int i = low;
    int j = low;

    while (i <= high) {
        if (arr[i] > pivot) {
            i++; // Jika elemen lebih besar dari pivot, lanjutkan
        } else {
            // Jika elemen lebih kecil atau sama dari pivot, tukar elemen
            swap(arr, i, j);
            i++;
            j++;
        }
    }
    return j - 1; // Kembalikan posisi akhir pivot
}

// Fungsi utama quick sort (rekursif)
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high]; // Ambil elemen terakhir sebagai pivot
        int pos = partition(arr, low, high, pivot); // Partisi array
        quickSort(arr, low, pos - 1);  // Rekursif ke kiri dari pivot
        quickSort(arr, pos + 1, high); // Rekursif ke kanan dari pivot
    }
}

int main() {
    int n;

    // Meminta input panjang array
    cout << "Tentukan panjang array : ";
    cin >> n;

    int arr[n];

    // Memasukkan elemen array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Memanggil fungsi quickSort untuk mengurutkan array
    quickSort(arr, 0, n - 1);

    // Menampilkan array yang sudah disorting
    cout << "Berikut adalah array yang telah di sortir : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}
