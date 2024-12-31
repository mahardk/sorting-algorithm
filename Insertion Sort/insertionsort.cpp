#include <iostream>
using namespace std;

int main() {
    int data[] = {5, 4, 3, 2, 1, 3, 2, 1, 2, 1, -69, -21};
    int n = sizeof data / sizeof data[0];

    for (int i = 1; i < n; i++) {
        int key = data[i];
        int j = i - 1;

        for (j;j>=0 && data[j] > key; j--) {
            data[j + 1] = data[j];
        }
        data[j + 1] = key;
    }

    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    return 0;
}
