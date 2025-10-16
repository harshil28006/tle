#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(),(x).end()
#define read2D(name, r, c) vector<vector<int>> name(r, vector<int>(c)); for(auto &row : name) for(auto &val : row) cin >> val;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define display(x) cout << x << endl;

int n;
int arr[23];
int total_sum = 0;

int solve(int i = 0 , int current_sum = 0)
{
    if(i == n){
        int other_set_sum = total_sum - current_sum;
        return abs(current_sum - other_set_sum);
    }
    
    int pick = solve(i+1 , current_sum + arr[i]);
    int not_pick = solve(i+1 , current_sum);
    return min(pick , not_pick);
}

int32_t main()
{
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        total_sum += arr[i];
    }    
    
    cout << solve(0, total_sum) << endl;
    return 0;
}