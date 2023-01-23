
#include<bits/stdc++.h>
using namespace std;

static bool cmp(string &i,string &j){
    return i.size()>j.size();
}

int main(){
    vector<string>v;
    v={"saurabh","is","Good","Boy"};
    sort(v.begin(),v.end(),cmp);
    
    for(auto x:v)cout<<x<<" ";
    //o/p-
    // saurabh Good Boy is 
    return 0;
}
