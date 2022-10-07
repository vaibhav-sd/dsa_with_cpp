#include<bits/stdc++.h>
using namespace std;

// complexity = O(n * log log n)
void sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i <= n; i++) {
        if(is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 0; i <= n; i++) {
        if(is_prime[i] == true) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;

    sieve(n);

    return 0;
}