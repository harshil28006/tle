#include<bits/stdc++.h>
#include<cstring>
//#include<iostream>
using namespace std;

void print(int i , int n){
    if(i == n){
        cout << i << endl;
        return;
    }else{
        cout << i << endl;
        print(i+1 , n);
      }
}

int main(){
    int i = 1;
    int n = 5;
    print(i,n);

    char h[] = "harshil";
    int i = 0;
    int j = strlen(h);

}

//for printing the number in reverse order_method_2

void reverse(int i , int n){
    if(i == n){
        cout << i << endl;
        return;
    }else{
        
        print(i+1 , n);
        cout << i << endl;
      }
}

//factorial of a number
int fact(int i){
    if(i == 0){
          return 1;
    }else{
         int sum = fact(i-1);
         return sum * i;
    }
}

//checking pallindrome strig or not with recursion
int pallin(int i , int j , char h[]){
    
    if(i > j){
        return true;
       }
       if(h[i] != h[j]){
        return false;
       }
       return pallin(i+1 , j-1 , h);  
}

//linear search using recurssion
bool find(int i ,int n , int arr[] , int t){
    if(i == n){
        return false;
    }
    if(arr[i] == t){
        return true;
    }
    return find(i+1 , n , arr , t);
}

//fibonacci series
int fibo(int n){
    if(n <= 1){
        return n;
    }
    return fibo(n-1) + fibo(n-2); 
}

//memorization
int fibon(int n){
    int dp[n] = {-1};
    if( n <= 1){
        return n;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = fibon(n-1) + fibon(n-2);
    return dp[n];
}