#include<bits/stdc++.h>
#include<cstring>
//#include<iostream>
using namespace std;

void fun(int n , vector<string> &ans , string &temp , int i=0 , int j = 0){
    if(i == n && j == n){
        ans.push_back(temp);
        return;
    }
    if(i+1 <= n){
        temp.push_back('(');
        fun(n , ans , temp , i+1 , j);
        temp.pop_back();
    }
    if(j+1 <= n && j+1 <= i){
        temp.push_back(')');
        fun(n , ans , temp , i , j+1);
        temp.pop_back();
    }
}

vector<string> generateparenthesis(int n){
    vector<string> ans;
    string temp;
    fun(n , ans , temp);
    return ans;
}