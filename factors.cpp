#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void all(int n)
{
    vector <int> pf[n+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j+=i)
        {
            pf[j].push_back(i);
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout << i << ": ";
        for(int j=0; j<pf[i].size(); j++)
        {
            cout << pf[i][j] << " ";
        }
        cout << endl;
    }
}
void prime(ll n)
{
    int a[n+1]={0};
    vector <ll> b[n+1];
    for(ll i=2; i<=n; i++)
    {
        if(a[i]==0)
        for(ll j=i; j<=n; j+=i)
        {
            if(j!=i)
            a[j]=1;
            b[j].push_back(i);
        }
    }
    for(ll i=2; i<=n; i++)
    {
        cout << i << ": ";
        for(ll j=0; j<b[i].size(); j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    cout << "enter a number to find factors until" << endl;
    int n;
    cin >> n;
    cout << "for prime enter '1' else enter '2'" << endl;
    int ok;
    cin >> ok;
    if(ok == 1)
    {
        prime(n);
    }
    if(ok == 2)
    {
        all(n);
    }
}
