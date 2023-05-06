#include <iostream>
#include <algorithm>

void quicksort(int *arr, int kiri, int kanan) {
    int i = kiri, j = kanan;
    int tmp;
    int pivot = arr[(kiri + kanan) / 2];

    /* pembagian */
    while (i <= j) {
        while (arr[i] < pivot)
              i++;
        while (arr[j] > pivot)
              j--;
        if (i <= j) {
              tmp = arr[i];
              arr[i] = arr[j];
              arr[j] = tmp;
              i++;
              j--;
        }
    }

    /* rekursi */
    if (kiri < j)
        quicksort(arr, kiri, j);
    if (i < kanan)
        quicksort(arr, i, kanan);
}

int main() {
    int n;
    std::cout << "Masukkan jumlah elemen: ";
    std::cin.sync();
    std::cin >> n;

    int *arr = new int[n];
    std::cout << "Masukkan elemen: ";
    for (int i = 0; i < n; i++) {
        std::cin.sync();
        std::cin >> arr[i];
    }

    quicksort(arr, 0, n-1);

    std::cout << "Array yang terurut: ";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";

    delete[] arr;
    return 0;
}