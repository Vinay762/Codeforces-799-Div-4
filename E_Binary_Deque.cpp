#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    // check if there is test case
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }

    if (a[n - 1] < s)
    {
        cout << -1 << endl;
        return;
    }

    if (a[n - 1] == s)
    {
        cout << 0 << endl;
        return;
    }
    ll mn = 1e9;
    for (ll i = 0; i < n; i++)
    {
        ll ind = upper_bound(a.begin(), a.end(), s + (i != 0 ? a[i - 1] : 0)) - a.begin();
        ind = n - ind + i;
        mn = min(mn, ind);
    }
    cout << mn << endl;
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