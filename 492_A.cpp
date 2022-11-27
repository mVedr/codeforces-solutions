#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    return n*(n+1)/2;
}
int main(){
    int n; cin>>n;
    int h=0;
    while(true){
        n-= solve(h+1);
        if(n>=0) h++;
        else break;
    }
    cout<<h;
    return 0;
}