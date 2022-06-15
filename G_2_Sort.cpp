#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    // check if there is test case

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0;
    ll prev = 0;
    for (int i = 1; i < n; i++)
    {
        if (2 * a[i] <= a[i - 1])
        {
            // cout << i <<  << endl;
            ans += max(0LL, i - prev - k);
            prev = i;
        }
    }
    ans += max(0LL, (n - prev - k));
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