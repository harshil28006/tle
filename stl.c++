#include<bits/stdc++.h>
//#include<iostream>
using namespace std;


bool compare(pair<int, int> a , pair<int , int> b){

             if(a.first == b.first){
                return a.second < b.second;
                return a.first < b.first;
             }
       }

int main(){

       //DEQUE
       deque<int> d = {1,2,34,5};
       d.push_back(1);
       d.push_back(2);
       d.push_back(3);

       d.push_front(7);
       d.push_front(3);
       d.push_front(5);//it will add the number in the front

       //TC is same but its 1.5 times slower than vector
    
       //SORT 
       
       //syntax for comparator
       /*bool compare(datatype a , datatype b){

        if(a should be placed strictly  before b )
                 return true;
                 else
                     return false;
       } if a and b are equal then it should return false*/ 
    
       //sort function in vector
       vector<pair<int , int>> d1 = {{1,2} , {3,5},{1,6} , {6,7}};
       sort(d1.begin() , d1.end() , compare);
       for( auto [a,b] : d1){

        cout << a << " " << b <<  endl;

        //STL binary search function
      
       }
        int a[10] = {1,2,3,4,5,5,6,7,8};

        cout << lower_bound(a,a+9,5) << endl;
        cout << upper_bound(a,a+9,4) << endl;
        cout << binary_search(a,a+9,5) << endl;

        //what to do in edge case
        auto it =  upper_bound(a,a+9,4);
        if(it != a)
        it--;
        else{
         //edge case
        }



        //what to if we want value lesser than or equal to target
        cout << lower_bound(a,a+9,4) - 1 << endl;
        //the above line will give us the 
        
        //binary search on unsorted datatypes
        set<int> s = (1,2,3,4,5);

        cout << *s.upper_bound(5) << endl;
        cout << *s.lower_bound(5) << endl;
        //you CANNOT get the index , because set dosen't allow it
         

        

        
    }
       
    // priority queue
    signed main(){

           priority_queue<int> pq;
           pq.push(5);
           pq.push(3);
           pq.push(2);
           pq.push(7);

           //higher the number , larger the priority

           while(!pq.empty()){

               cout << pq.top << endl;
               pq.pop();
   
           }

           //if you want the smallest value then
           priority_queue<int , vector<int>>

    }  