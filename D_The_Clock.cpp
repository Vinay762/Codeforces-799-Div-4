#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

bool isPal(string s)
{
    ll i = 0, r = s.size() - 1;
    while (i <= r)
    {
        if (s[i] != s[r])
            return false;
        i++;
        r--;
    }
    return true;
}

void solve()
{
    // check if there is test case
    string s;
    cin >> s;
    ll t;
    cin >> t;
    ll mh = t / 60;
    ll mm = t % 60;
    set<string> st;
    st.insert(s);
    string last = s;
    while (true)
    {
        ll hour = stoll(last.substr(0, 2));
        ll min = stoll(last.substr(3, 2));
        ll nmin = (min + mm) % 60;
        ll add = (min + mm) / 60;
        ll nhr = (hour + mh + add) % 24;
        string snmin = (nmin < 10) ? "0" : "";
        snmin += to_string(nmin);
        string snhr = (nhr < 10) ? "0" : "";
        snhr += to_string(nhr);
        string ns = snhr + ":" + snmin;
        if (st.find(ns) != st.end())
        {
            break;
        }
        else
        {
            last = ns;
            st.insert(ns);
        }
    }
    ll ans = 0;
    for (string vin : st)
    {
        if (isPal(vin))
            ans++;
    }
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