#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<char> st_ch;
    string name;cin>>name;
    for(int i=0;i<name.length();i++){
       st_ch.insert(name[i]);
    }
    if(st_ch.size()%2) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    return 0;
}