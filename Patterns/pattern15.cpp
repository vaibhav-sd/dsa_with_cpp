#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0 ; i < n; i++){
        char ch = 'A'+n-i-1;
        for(int j = 0 ; j <= i; j++){
            cout<< ch++ <<" ";
        }
        cout << endl;
    }
    return 0;
}