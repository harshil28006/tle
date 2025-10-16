#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(),(x).end()
#define read2D(name, r, c) vector<vector<int>> name(r, vector<int>(c)); for(auto &row : name) for(auto &val : row) cin >> val;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define display(x) cout << x << endl;
char ch[8][8];
int row[8];//to check wether there is queen at a particular row or not
int leftdiagonal[20] , rightdiagonal[20];

int solve(int col){
     
     if(col == 8){
        return 1;
     }

     int ans = 0;
     for(int i = 0 ;i < 8 ; i ++){
        if(ch[i][col] != '*' && row[i] == 0 && leftdiagonal[i + col] == 0 && rightdiagonal[7+col-i] == 0 ){

             row[i] = 1;
             leftdiagonal[i + col] = 1;
             rightdiagonal[7 + col - i] = 1;
             ans += solve(col + 1); 
        }
     }
     return ans;
}

int main(){
    for(int i = 0 ;i < 8 ;i++){
        for(int j = 0 ; j < 8 ;j++){
            cin >> ch[i][j];
        }
    }

    cout << solve(0) << endl;
}
