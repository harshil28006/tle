#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void easy_way(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {cin >> arr[i];}
    int prefix[n] = {arr[0]};
    for(int i = 1 ; i < n ; i++){
        prefix[i] = arr[i] + prefix[i-1];
        cout << prefix[i] << " ";   
    }
    
}

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {cin >> arr[i];}
    int prefix[n] = {0};
    for (int i = 0; i < n; i++){
        for(int j = 0 ; j < i ; j++){
            prefix[i] += arr[j];
            
        } 
        cout << prefix[i] << " ";
    }
    cout << endl;
}

int32_t main() {
    fastio;
    int t;
    cin >> t;
    while (t--) easy_way();
    return 0;
}