#include <bits/stdc++.h>
using namespace std;

double precision(int n, int sol) {
    double factor = 1;
    double ans = sol;
    for (int i = 0; i < 3; i++) {
        factor = factor / 10;
        for (double j = ans; j * j < n; j += factor) {
            ans = j;
        }
    }

    return ans;
}

int sqrt(int n) {
    long long int st = 0, end = n, mid;
    double ans = -1;
    while (st <= end) {
        mid = st + (end - st) / 2;
        if (mid * mid == n)
            return mid;
        else if (mid * mid < n) {
            st = mid + 1;
            ans = mid;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << precision(n, sqrt(n)) << endl;

    return 0;
}
