#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n;cin>>n;
//     int W[7];
//     for(int i=0;i<7;i++){
//         int x; cin>>x;
//         W[i] = x;
//     }
//      int k =0, prev;
//     while(true){
//     if(n<=0) {
//         break;
//     }
//       n-= W[k];
//       k=(k+1)%7;
//     }
//     cout<<k+1;
//     return 0;
// }
int main(){
    int n;cin>>n;
    int W[7];
    for(int i=0;i<7;i++){
        int x; cin>>x;
        W[i] = x;
    }
     int k =0, prev;
    while(true){
    if(n<=0) {
        break;
    }
      n-= W[k];
      k=(k+1)%7;
    }
    cout<<k+1;
    return 0;
}