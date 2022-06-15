#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    // check if there is test case
    vector<vector<char>> mat(25, vector<char>(25, '.'));
    for (ll i = 1; i <= 8; i++)
    {
        for (ll j = 1; j <= 8; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (ll i = 2; i <= 8; i++)
    {
        for (ll j = 2; j <= 8; j++)
        {
            if (mat[i][j] == '#')
            {
                if (mat[i - 1][j - 1] == '#' && mat[i - 1][j + 1] == '#' && mat[i + 1][j - 1] == '#' && mat[i + 1][j + 1] == '#')
                {
                    cout << i << " " << j << endl;
                    return;
                }
            }
        }
    }
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