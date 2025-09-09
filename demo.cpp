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

    vector<int> q(n);
    for(int i=0;i<n;i++)
    {
        q[i]=n-arr[i]-1;
    }

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