#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(),(x).end()
#define read2D(name, r, c) vector<vector<int>> name(r, vector<int>(c)); for(auto &row : name) for(auto &val : row) cin >> val;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define display(x) cout << x << endl;

int k;
int dp[100013];
// solve returns the number of ways to eat n flowers
int solve(int n)
{
    
    if(n == 0){
        return 1;
    }
    if(n < 0){
        return 0;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] = solve(n-k)/*for white flower*/ + solve(n-1)/*for red flowers*/;
}

int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    fast_io;
    memset(dp , -1 , sizeof dp);
    int t;
    cin>>t >> k;
     int pre[100013];
        pre[0] = solve(0);
        for(int i = 0 ; i < 100013 ; i++){
            pre[i] = pre[i-1] + solve(i);
        }
        
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        
       
        cout <<  pre[b] - pre[a-1] << endl; 

    return 0;
  }
}