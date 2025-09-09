#include<bits/stdc++.h>
//#include<iostream>
#include<cmath>
using namespace std;


void solve()
{
    int n;cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(n==2)
    {
        
    }
    vector<int> q=arr;
    reverse(q.begin(),q.end());

    for(int i=0;i<n;i++)
    {
        cout<<q[i]<<" ";
    }

    cout<<endl;

}

int main(){

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

}