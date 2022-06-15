#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    // check if there is test case
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> mp(10, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        ll x = a[i] % 10;
        mp[x]++;
    }
    for (ll i = 0; i <= 9; i++)
    {
        for (ll j = 0; j <= 9; j++)
        {
            for (ll k = 0; k <= 9; k++)
            {
                ll sum = (i + j + k) % 10;
                if (sum == 3)
                {
                    if (i != j && j != k && k != i && mp[i] && mp[j] && mp[k])
                    {
                        cout << "YES" << endl;
                        return;
                    }
                    if (i == j && j != k && mp[i] >= 2 && mp[k])
                    {
                        cout << "YES" << endl;
                        return;
                    }
                    if (i == k && j != k && mp[i] >= 2 && mp[j])
                    {
                        cout << "YES" << endl;
                        return;
                    }
                    if (j == k && j != i && mp[j] >= 2 && mp[i])
                    {
                        cout << "YES" << endl;
                        return;
                    }
                    if (i == j && j == k && mp[i] >= 3)
                    {
                        cout << "YES" << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}