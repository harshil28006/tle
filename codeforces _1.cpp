#include<bits/stdc++.h>
//#include<iostream>
#include<cmath>
using namespace std;

int collatz(int k , int x){

       if(k == 1){
             
               x=2*x;
               return x; 
       }
             
       x = x*pow(2,k);
       return x;

}

void solve()
{
        int k;
      int x;
      cin >> k ;
      cout << "\n";
      cin >> x ;
      cout << "\n";
      int m = collatz(k,x);
      cout << m;
}

int main(){

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

}