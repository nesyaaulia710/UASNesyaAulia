#include <iostream>
using namespace std;

// Fungsi untuk melakukan binary search
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;

        // Jika x berada di tengah
        if (arr[mid] == x)
            return mid;

        // Jika x lebih kecil dari mid, lakukan pencarian di subarray kiri
        if (arr[mid] < x)
            l = mid + 1;

        // Jika x lebih besar dari mid, lakukan pencarian di subarray kanan
        else
            r = mid - 1;
    }

    // Jika tidak ditemukan
    return -1;
}

// Fungsi untuk mencetak hasil
void printResult(int result) {
    if (result == -1)
        cout << "Elemen tidak ditemukan";
    else
        cout << "Elemen ditemukan pada indeks " << result;
}

int main() {
	cout << "Nama : Nesya Aulia" << endl;
	cout << "Nim : 241011400890" << endl;
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, n - 1, x);
    printResult(result);
    return 0;
}
