#include <bits/stdc++.h>
using namespace std;

int pivotElement(vector<int> &v, int n) {
    int st = 0, end = n - 1, mid;
    while (st < end) {
        mid = st + (end - st) / 2;
        if (v[mid] >= v[0]) {
            st = mid + 1;
        }
        else {
            end = mid;
        }
    }
    return st;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << pivotElement(arr, n) << endl;

    return 0;
}