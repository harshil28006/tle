#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    string s;
    cin >> s;
  
    int cnt = 0 ;
    for(char x : s){
          
        cnt++;
    }
    if(cnt > 10){
        vector<char> v;
        v.push_back(s[0]);
        string num = to_string(cnt - 2);
        for(char c : num){
               v.push_back(c);
        }
        v.push_back(s[cnt - 1]);
        for(int i = 0 ; i < v.size() ; i++){
            cout << v[i] ;
        }
    }

    

        if(s.size() <= 10){
        for(int i = 0 ; i < s.size() ; i++){
            cout << s[i];
        }
        cout << endl;
        return ;
    }
    cout << endl;
}

int32_t main() {
    fastio;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}