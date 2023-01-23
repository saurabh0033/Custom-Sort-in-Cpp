#include<bits/stdc++.h>
using namespace std;
static bool cmp(int &i,int &j){
    if(i<j)return true;
    return false;
}

int main(){
    vector<int>v;
    v={2,3,33,333,-3994,4546,100000,45,-6,-3,0};
    
    sort(v.begin(),v.end(),cmp);
    
    for(auto x:v)cout<<x<<" ";
    
    //o/p-
    //-3994 -6 -3 0 2 3 33 45 333 4546 100000
    return 0;
}
