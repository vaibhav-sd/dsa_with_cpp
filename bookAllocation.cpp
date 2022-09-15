#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &v, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + v[i] <= mid) {
            pageSum += v[i];
        }
        else {
            studentCount++;
            if (studentCount > m || v[mid] > mid) {
                return false;
            }
            pageSum = v[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> &v, int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    int st = 0, end = sum, mid;
    int ans = -1;
    while (st <= end) {
        mid = st + (end - st) / 2;
        if (isPossible(v, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << allocateBooks(v, n, m) << endl;

    return 0;
}
