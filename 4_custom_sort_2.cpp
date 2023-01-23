#include<bits/stdc++.h>
using namespace std;

int main(){
  
    vector<int>v;
    v={2,3,33,333,-3994,4546,100000,45,-6,-3,0};
    
    //custom sort will be offers us whatever the vector array or vector string in Descending order or Decreasing order;
    
    sort(v.begin(),v.end(),[&](auto i,auto j){return i>j;});
    
    for(auto x:v)cout<<x<<" ";
  
    //o/p-
    //100000 4546 333 45 33 3 2 0 -3 -6 -3994
    return 0;
}
