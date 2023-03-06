#include<bits/stdc++.h>
using namespace std;
int main(){
    string num;cin>>num;
    int digits = num.length() , ans = 0;
    ans = 1<<digits-2;
    for(int i = digits-2,count=0;i>=0;i--,count++){
        if(num[i]=='7') ans+=(1<<count); 
    }cout<<ans+1;
    return 0;
}