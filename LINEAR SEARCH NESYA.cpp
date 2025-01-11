#include <iostream>
using namespace std;

// Fungsi untuk melakukan pencarian linear
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
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
	cout << "Nim :241011400890 " << endl;
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, n, x);
    printResult(result);
    return 0;
}
