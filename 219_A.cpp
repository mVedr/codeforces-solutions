#include <bits/stdc++.h>
using namespace std;
int main()
{
    string k;
    int myK;
    cin >> myK;
    cin >> k;
    map<char, int> mp;
    for (int i = 0; i < k.length(); i++)
    {
        mp[k[i]]++;
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        int x = i->second;
        if (x % myK != 0)
        {
            cout << -1;
            return 0;
        }
    }
    int strl = 0;
    while(true)
        {for (auto i = mp.begin(); i != mp.end(); i++)
        {
            if(i->second==0) break;
            if (strl == k.length())
                break;
            int t = i->second / myK;
            while (t--)
            {
                k[strl]=i->first;
                i->second-=1;
                strl++;
            }
        }
        }
    cout<<k;
    return 0;
}