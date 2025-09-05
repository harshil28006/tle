#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main(){

    //unordered sets
    unordered_set<int> age = {1,4,5,2,3,4444,11,222,,4,43,2,22,1,1};
    //or we ocan write as
    unordered_set<string , int> hello ;
    hello["alice"] = 123;
    //unordered set
    //for example
    vector<int> v = {1,4,9,5,7,3,5};
    sort(v.begin() , v.begin() + 3);//basically it sorts for positon 0 to 2 and 3 is not included
    cout << max_element(v.begin() , v.end()) ;
    // the above line will give the value of max element and if we want the position of that element then
    cout << max_element(v.begin() , v.end()) - v.begin() ;
  
}