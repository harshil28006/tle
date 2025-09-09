#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int collatz(int k , int x){

       if(k == 1){
             
               x=2*x;
               return x; 
       }
      
       for(int i = 1 ; i<=k ; i++){

             x = x*2;
             return x;
       }
}

int main(){

      int k;
      int x;
      cin >> k ;
      cout << "\n";
      cin >> x ;
      cout << "\n";
      int m = collatz(k,x);
      cout << m << endl;
}