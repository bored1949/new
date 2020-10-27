#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void sieve(int n)
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
int main()
{
    cout << "enter a number to find factors until" << endl;
    int n;
    cin >> n;
    sieve(n);
}
