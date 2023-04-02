#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#include <string>
#include <cstdlib>
#define ll long long
#define vll vector<long long>
#define pb push_back
#define pi pair<int, int>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)

#define pq priority_queue<ll, vector<ll>, greater<ll>>
#define all(v) v.begin(), v.end()

using namespace std;

void solve()
{

    ll n;
    cin >> n;
    vll arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < 257; i++)
    {
        vll b(n);
        for (int j = 0; j < n; j++)
        {
            b[j] = arr[j] ^ i;
        }

        ll sum = 0;

        for (ll k = 0; k < n; k++)
        {
            sum ^= b[k];
        }

        if (sum == 0)
        {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main()
{
    tc
    {
        solve();
    }
    return 0;
}