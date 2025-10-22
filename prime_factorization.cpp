#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(),(x).end()
#define read2D(name, r, c) vector<vector<int>> name(r, vector<int>(c)); for(auto &row : name) for(auto &val : row) cin >> val;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define display(x) cout << x << endl;

//prime factor
void solve()
{
    vector<int> spf(20,-1);
    for(int  i = 2 ; i < 20 ;i++){
        if(spf[i] == -1){
            for(int j = i ; j < 20 ; j+=i){
                if(spf[j] == -1){
                    spf[j] = i;
                }
            }
        }
    }
     int n =20 ;
    while(n>1){
        cout << spf[n] << ' ';
        n /= spf[n];
    }
        return;
}     
    
//euclid gcd;
void gcd(int a , int b){
     return (b = 0 ? a : gcd(b,a%b));
}

//modular arithmetic
void mod_add(int a , int b){
       return (a%m + b%m)%m;
}

void mod_sub(int a , int b){
    return (a%m + b%m + m)%m;
}

int mod_mul(int a , int b , int m){
    return ( a%m * b%m)%m;
}

int mod_expo(int a , int b , int m){
    if(b == 0){
        return 1;
    }
    int res = mod_expo(a, b/2 , m);
    res = mod_mul(res , res);
    if(b % 2 == 1){
        res = mod_mul(res , a);
    }
}

   

//modular inverse
int mod_inv(int a , int b , int m){
     return mod_expo(a,m-2,m);
}

//modular division
int mod_div(int a , int b , int m){
    return mod_mul(a , mod_inv(b,m) , m);
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

