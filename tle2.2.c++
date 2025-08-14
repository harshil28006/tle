#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main(){
    //bit manupulation

    //bit masking
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n; i ++){
        cin >> a[i];
    }
    
    for(int i = 0 ; i < (1 << n); i++ ){
        for(int j = 0 ; j < n ;j++){
             if( i >> j & 1){
                cout << a[j] << " ";
                cout << endl ; 
             }
        }
    }

    //how to get exact complement
    while(true){
        int n ; cin >> n;

        int l = 0;
    
    
        while(n >> l){
            l++;
        }
        
        cout << ((~n) & ((1 << l) - 1));
    }
}