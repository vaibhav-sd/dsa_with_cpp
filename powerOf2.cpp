#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    while (n) {
        if (n & 1 == 1)
            count++;
        n = n >> 1;
    }
    if (count == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}