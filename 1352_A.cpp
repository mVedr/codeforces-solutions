#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define f(s, e) for (long long int i = s; i < e; i++)
#define fi(s, e) for (long long int i = s; i <= e; i++)
#define ll long long
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
string to_upper(string a)
{
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] -= 'a' - 'A';
    return a;
}
string to_lower(string a)
{
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 'a' - 'A';
    return a;
}
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
template <class T>
void print_v(vector<T> &v)
{
    for (auto x : v)
        if (x != 0)
            cout << x << " ";
}
template <class T>
void print_mp(map<T, T> &mp)
{
    cout << "{";
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
}
template <class T>
void print_st(set<T> &st)
{
    for (auto it : st)
        cout << it << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin>>n;
        int c = pow(10, n.length());
        vi ans;
        f(0, n.length())
        {
            int x = n[i] - '0';
            c /= 10;
            if(x!=0)
            ans.push_back(x * c);
        }
       cout<<ans.size();cout<<endl;
        print_v(ans);cout<<endl;
    }
    return 0;
}