#include<bits/stdc++.h>
using namespace std;
int main(){
    string num;
    cin>>num;
    int nl=0;
    for(int i=0;i<num.length();i++){
        if(num[i]=='4'||num[i]=='7') nl++;
    }
    if(nl==4||nl==7) cout<<"YES";
    else{
        cout<<"NO";
    }
    return 0;
}