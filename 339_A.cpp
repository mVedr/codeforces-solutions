#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<char> ans;
    string q;
    cin>>q;
    for (int i = 0; i < q.length(); i++)
    {
        if(i==0||i%2==0){
            ans.insert(q[i]);
        }
    }
    int count=0;
    for(auto it:ans){
        q[count]=it;
        count+=2;
    }
    cout<<q;
    return 0;
}