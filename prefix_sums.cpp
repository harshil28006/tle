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

//solve with N elements and Q querries
void querries(){
        
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {cin >> arr[i];}
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        int sum = 0;
        for(int i = l ;i < r ;i++){
            sum += arr[i];
            cout << sum;
        }
    }
}

//best idea - best case time complexity
void best(){
    int n;
    cin >> n;
    int ar[n] , pr[n] {};
    for(int i = 0 ; i < n ;i++){
        cin >> ar[i];
        pr[i] = ar[i] + pr[i-1]; 
    }

    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << pr[r] - pr[l-1] << endl;
    }
}

//2-D prefix sum
void prefix(){
    
    int n , m;
    cin >> n >> m;
    int arr[n][m];
    int pre[n][m];
    for(int i  =0 ; i < n ;i++){
        for(int j = 0;j<m;j++){
            cin >> arr[i][j];
            pre[i][j] = arr[i][j] + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];
        }
    }   

    //for querries
    int q ;
    cin >> q;
    while(q--){
        int a , b , c ,d;
        cin >> a >> b >> c >> d;
        cout << pre[c][d] - pre[c][b-1] - pre[a-1][d] + pre[a-1][b-1];
    }


}

//difference arrays
void difference(){
    int n,q;
    cin >> n >> q;
    int diff[n+1] = {0} ;
    while(q--){
        int l ,r ,k;
        cin >> l >> r >> k;
        diff[l] += k ; // adds k from l to n
        diff[r+1] -= k ; // removes k from r+1 to n
    }//the above part is the difference array

     for(int i = 0; i < n ;i ++){
        diff[i] += diff[i-1]; 
     }

     for(int i = 0 ; i < n ; i++){
        cout << diff[i] << " ";
        
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
    while (t--) difference();
    return 0;
}