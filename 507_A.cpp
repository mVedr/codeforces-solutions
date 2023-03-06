#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x;
    vector<pair<int,int>> v;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back({x,i+1});
    }
    sort(begin(v),end(v));
    int days =0 , cnt=0;
    vector<int> res;
     for(int i=0;i<n;i++ ){
        days += v[i].first;
        if(days<=k){
            cnt++;
            res.push_back(v[i].second);
        }else{
            break;
        }
     }
     cout<<cnt;
     cout<<endl;
     for(auto it : res){
        cout<<it<<" ";
     }
    return 0;
}