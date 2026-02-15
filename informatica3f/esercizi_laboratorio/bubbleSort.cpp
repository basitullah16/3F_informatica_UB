#include <iostream>
using namespace std;

void bubbleSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numeri[] = {5, 2, 9, 1, 3};
    int n = 5;

    bubbleSort(numeri, n);

    cout << "Array ordinato: ";
    for (int i = 0; i < n; i++) {
        cout << numeri[i] << " ";
    }

    return 0;
}