#include<bits/stdc++.h>
//#include<iostream>
#include<cmath>
using namespace std;

void backtracking(int i , vector<int> &vec , int n  , int arr[]){

       if(i == n){
        for(auto it : vec){
                cout << it << " ";

          } 
          cout << endl;
          return;
       } 

       vec.push_back(arr[i]);
       backtracking(i+1 , vec , n , arr);
       vec.pop_back();
       backtracking(i+1 , vec , n , arr);

}

int main(){
      
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    vector<int> vec;
    backtracking(0, vec , n , arr);
}

