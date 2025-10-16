#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> team(3 , vector<int>(n));
    for(int j= 0 ; j < n ;j++){
        for(int i = 0 ; i < 3 ;i++){
            cin >> team[i][j];
        }
    }

    int cnt = 0;
    for(int j = 0; j < n ;j++){
        int sum = 0 ; 
        for(int i = 0 ; i < 3 ;i++){
            sum += team[i][j];
        }
        if(sum >= 2){
            cnt ++ ;
        }
    }

    cout << cnt << endl;
    
    
}

int32_t main() {
    fastio;
    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}
