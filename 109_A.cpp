#include<bits/stdc++.h>
using namespace std;
bool solve(int N){
     if(N==0) return true;
    if(N<0) {return false;}
    solve(N-4);
    solve(N-7);
}
int main(){
    cout<<solve(11);
    return 0;
}