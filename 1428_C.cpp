#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;cin>>t;
    while(t--){
    string s;cin>>s;
    stack<char> st;
    for(int i =0;i<s.length();i++){
        if(st.size()==0){
            st.push(s[i]);
            
        }
        else if(s[i]=='B'&&(st.top()=='A' || st.top()=='B')){
           st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    cout<<st.size()<<endl;}
}

int main(){
    solve();
    return 0;
}