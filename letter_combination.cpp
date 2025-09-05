#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

vector<string> ans;
vector<string> keys = {
    "", "", "abc", "def", "ghi",
    "jkl", "mno", "pqrs", "tuv", "wxyz"
};


int fun(string &digit , string &temp , int ind){
         
       int n = digit.size();
       if(ind == n){
        ans.push_back(temp);
        return 1;
       }     

     for(auto &keys:keys[digit[ind] - '0']){
        temp.push_back(keys);
        fun(digit , temp , ind + 1);
        temp.pop_back();
     }  
}

vector<string> lettercombination(string digit){
    if(digit.size() == 0){
        return ans;
    }

    string temp;
    fun(digit , temp , 0);
    for(int i = 0 ; i < ans.size();i++){
        cout << ans[i] << endl;
    }
}


int main(){
    string digit ;
    cout << "enter the number" << endl;
    cin >> digit ;
    lettercombination(digit);
    return 0;
}