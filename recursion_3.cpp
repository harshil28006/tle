#include<bits/stdc++.h>
#include<cstring>
//#include<iostream>
using namespace std;

#define ll long long
vector<vector<int>> ans;

void f(int i , int n , vector<int> &v , ll sm, int target , vector<int> res){
    if(i == n){
        if(sm == target) ans.push_back(res);
        return ; 
    }

    f(i+1 , n , v , sm , target , res); 
    res.push_back(v[i]);
    if(sm + v[i] <= target){    
        f(i , n , v ,sm + v[i] , target , res);
    }  
}

vector<vector<int>> combinationsum(vector<int> &candidates , int target){
    vector<int> res;
    f(0 , candidates.size(), candidates , 0ll , target , res);
    return ans;
}

int main(){
    int n;
    cout << " enter the value of n" << endl;
    cin >> n;
    cout << endl;
    vector<int> candidates(n);
    cout << "enter the array";
    for(int i = 0 ; i < n ; i++){
        cin >> candidates[i];
    }
    int target;
    cout << "enter the target value";
    cin >> target;
    cout << endl;
    combinationsum(candidates , target);
    for(int i = 0 ; i < ans.size() ; i++){
        for(int x : ans[i]){
        cout << x << " ";
        }
        cout << endl;
    }
}

