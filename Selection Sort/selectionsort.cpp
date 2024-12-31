#include <iostream>
using namespace std;

int main() {
    int data[] = {5, 4, 3, 2, 1, 3, 2, 1, 2, 1};
    int n = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (data[j] < data[minIndex]) {
                minIndex = j;
            }
        }
        // Tukar elemen terkecil dengan elemen di posisi i
        if (minIndex != i) {
            int temp = data[i];
            data[i] = data[minIndex];
            data[minIndex] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    return 0;
}
