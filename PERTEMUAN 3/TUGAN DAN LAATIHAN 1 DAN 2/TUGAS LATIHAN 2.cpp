#include <iostream>
using namespace std;

// Fungsi untuk menukar elemen
void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Fungsi partition
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // pivot diambil dari elemen terakhir
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);
    return i + 1;
}

// Fungsi Quick Sort rekursif
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        // Sorting bagian kiri dan kanan secara rekursif
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// Fungsi utama
int main() {
    int n;

    // Header dan input panjang array
    cout << "Tentukan panjang array: ";
    cin >> n;

    int arr[n];

    // Input elemen array
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Menampilkan array sebelum disorting
    cout << "\nArray sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    // Memanggil quick sort
    quickSort(arr, 0, n - 1);

    // Menampilkan array setelah disorting
    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }

    cout << endl;
    return 0;
}
