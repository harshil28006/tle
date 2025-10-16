#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(),(x).end()
#define read2D(name, r, c) vector<vector<int>> name(r, vector<int>(c)); for(auto &row : name) for(auto &val : row) cin >> val;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define display(x) cout << x << endl;

void solve()
{
    int n;
    cin >> n;
    string arr;
    cin >>arr;

    if(arr.find('1') == string::npos or arr.find('0') == string::npos){
        display(0);
        return;
    }

    int cnt=0;
    int x=-1;
    int y=-1;
    for(int i = 0 ; i <n ; i++){
           if(arr[i] == 1){
              x = i;
              break;
           }
    }

    for(int i = n-1 ;i >= 0 ; i--){
        if(arr[i] == 1){
             y = i;
            break;
        }
    }

    for(int i = x ; i < y ;i++){
        if(arr[i] == 0){
            cnt++;
        }
    }

    cout << cnt << endl;
    return;
}

int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}