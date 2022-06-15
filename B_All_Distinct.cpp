#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    // check if there is test case
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll ans = 0;
    ll evenCount = 0;
    for (auto key : mp)
    {
        ll x = key.second;
        ans++;
        if (x % 2 == 0)
            evenCount++;
    }
    if (evenCount % 2)
        ans--;
    cout << ans << endl;
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