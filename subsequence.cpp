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

//count subsqeuence with sum s


int generate(int i ,int sum , int n , int arr[] , int target){
    
    
    if(i == n){
        //you have a new subsquence = you have a new sum
        if(sum == target){
            return 1;
        }
        
        return 0 ;
    }
    
    //pick step
    int left = generate(i + 1 , sum + arr[i] , n , arr , target );
    //not pick step
    int right = generate(i+1 , sum , n , arr , target);
    return (left + right);
}

//count path in a matrix

int Path(int i , int j , int n ,int m , vector<vector<int>> &arr){
    if( i >= n || j >= m ||arr[i][j] == 1){
        return 0;
    }  
    if(i == n-1 && j == m-1){
        return 1;
    }
    
    //right -> col shift -> j to j+1
    int right = Path(i ,j+1 , n ,m , arr);
    // down -> row shift -> i to i + 1
    int down = Path(i +1 , j , n , m, arr);

    return right + down;
} 

//rat in a maze problem

bool isvalid(int i , int j , int n , int m , vector<vector<int>> &arr){
    if(i>= 0&& j>= 0 && i < n && j < m && arr[i][j] == 0){
        return true;
    }
    return false;
}

int rat(int i , int j , int n , int m , vector<vector<int>> &arr ,string &path){
    int di = {0, 1 , 0, -1};
    int dj = {1, 0 , -1, 0};
    string dir = "RDLU";

    if(i == n-1 && j == m -1){
        cout << path << endl;
        return;
    }
    
    int di[] = {0, 1 , 0, -1};
    int dj[] = {1, 0 , -1, 0};
    string dir = "RDLU";
    
    

    arr[i][j] = 1;
    for(int a = 0 ; a < 4 ; a++){
        if(isvalid(i + di[a] , j + dj[a] , n , m , arr)){
           path.push_back(dir[a]);
           rat(i+di[a] , j+dj[a] , n , m , arr , path);
           path.pop_back();
        }
    }
    /*int right = rat(i , j+1 , n , m , arr);
    int down =  rat(i+1 , j , n , m , arr);
    int left =  rat(i , j-1 , n , m , arr);
    int up   =  rat(i-1 , j , n , m , arr);*/
    arr[i][j] = 0; // backtracking
    //return right + down + left + up; 
}


int main(){
      
    /*int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    vector<int> vec;
    //backtracking(0, vec , n , arr);
    cout << generate(0, 0 , n , arr , 36) << endl;*/

    int n,m;
    cin >> n >> m;
    vector<vector<int>>arr(n , vector<int>(m,0));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> arr[i][j];
        }
    }
    cout << Path(0,0,n,m,arr) << endl;
}

