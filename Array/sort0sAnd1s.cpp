#include <iostream>
using namespace std;

void sortBinaryArray(int arr[], int n) {
    int countZeros = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            countZeros++;
        }
    }

    for (int i = 0; i < countZeros; i++) {
        arr[i] = 0;
    }

    for (int i = countZeros; i < n; i++) {
        arr[i] = 1;
    }
}

int main() {
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sortBinaryArray(arr, n);

    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    
    return 0;
}
