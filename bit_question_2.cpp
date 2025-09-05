#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main(){
    int n , a , b;
    cin >> n >> a >> b;
    int c = 0;
    bool ok = true;
    for(int i = n-1 ; i >= 0 ; i--){
        if(((1 << i)&a)==((1 << i)&b)){
            if(((1 << i)&a)==0){
                c += (1 << i);
            }
        }else if(ok){
            if(((1 << i)&b)){
                c += (1 << i);
                ok = false;
            }
        }else{
            if(((1 << i)&a)){
                c += (1 << i);
            }
        }
    }
     
      cout << c << endl; 

}