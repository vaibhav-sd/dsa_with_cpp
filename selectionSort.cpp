#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    int pos;
    for (int i = 0; i < n; i++) {
        pos = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[pos] > arr[j]) {
                pos = j;
            }
        }
        swap(arr[pos], arr[i]);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
