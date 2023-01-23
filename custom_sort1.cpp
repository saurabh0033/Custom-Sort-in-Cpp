#include<bits/stdc++.h>
using namespace std;

int main(){
  
    vector<int>v;
    v={2,3,33,333,-3994,4546,100000,45,-6,-3,0};
    
    //custom sort will be offers us whatever the vector array or vector string in Ascending order or Increasing order;
    
    sort(v.begin(),v.end(),[&](auto i,auto j){return i<j;});
    
    for(auto x:v)cout<<x<<" ";
  
    //o/p-
    //-3994 -6 -3 0 2 3 33 45 333 4546 100000 
    return 0;
}
