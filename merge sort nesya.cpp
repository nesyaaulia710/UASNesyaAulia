#include <iostream>

using namespace std;

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    // Buat array sementara
    int L[n1], R[n2];

    // Copy data ke array sementara L[] dan R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Gabungkan kedua array sementara
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy elemen sisanya dari L[], jika ada
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy elemen sisanya dari R[], jika ada
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fungsi rekursif untuk melakukan merge sort
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Temukan titik tengah
        int m = l + (r - l) / 2;

        // Panggil mergeSort untuk dua bagian
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Gabungkan kedua bagian yang sudah terurut
        merge(arr, l, m, r);
    }
}

// Fungsi untuk mencetak array
void printArray(int A[], int size) {
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}

int main() {
	cout << "Nama : Nesya Aulia" << endl;
	cout << "Nim : 241011400890" << endl;
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan \n";
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    cout << "\nArray setelah diurutkan \n";
    printArray(arr, arr_size);
    return 0;
}
