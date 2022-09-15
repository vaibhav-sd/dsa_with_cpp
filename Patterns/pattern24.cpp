#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0 ; i < n; i++){
        int count = 1;
        for(int j = 0 ; j < n-i-1; j++){
            cout << "  ";
        }
        for(int j = 0; j <= i; j++){
            cout << count++ << " ";
        }
        count--;
        for(int j = 0; j < i; j++){
            cout << --count << " ";
        }
        
        cout << endl;
    }
    return 0;
}