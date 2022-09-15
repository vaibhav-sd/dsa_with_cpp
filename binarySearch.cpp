#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        return -1;
    }
}

int main()  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << binarySearch(arr, n, key) << endl;

    return 0;
}