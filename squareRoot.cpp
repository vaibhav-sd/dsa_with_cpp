#include <bits/stdc++.h>
using namespace std;

int squareRoot(int key) {
    long long int st = 0, end = key, mid;
    int ans = -1;
    while (st <= end) {
        mid = st + (end - st) / 2;
        if (mid * mid == key)
            return mid;
        else if (mid * mid < key) {
            st = mid + 1;
            ans = mid;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int key;
    cin >> key;
    cout << squareRoot(key) << endl;

    return 0;
}