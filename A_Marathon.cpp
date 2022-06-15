#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    // check if there is test case
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = 0;
    if (b > a)
        ans++;
    if (c > a)
        ans++;
    if (d > a)
        ans++;
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