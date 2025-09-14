#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#include<cmath>
using namespace std;

void solve(){

   int n,m,x1,y1;
   cin>>n>>m>>x1>>y1;
    
    vector<int> x(n);
    vector<int> y(m);
    for(int i= 0 ; i < n ; i++){
            cin >> x[i];
    }  
    
    for(int i= 0 ; i < m ; i++){
            cin >> y[i];
    }  
    
    
    sort(x.begin() , x.end());
    sort(y.begin() , y.end());
    int k = 0;
    for(int i = 0 ; i < n ; i++){
        if(x1 >= x[i]){
            k++;
        }
    }
    int t = 0;
    for(int i = 0 ; i < m ; i++){
        if(y1 >= y[i]){
            t++;
        }

    }
    
    cout << t + k << endl;

}

int main(){

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

}