#include <bits/stdc++.h>
#define nl '\n'

typedef long long ll;

using namespace std;

ll pw[20];

void solve()
{
    ll n; cin >> n;

    ll g = 9, p = 0;
    while(n > g)
    {
        n -= g;
        p++;
        g = 9 * pw[p] * (p + 1);
    }
    ll a = (n - 1) / (p + 1);
    ll b = (n - 1) % (p + 1);
    ll num = pw[p] + a;

    string s = to_string(num);
    cout << s[b] << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    pw[0] = 1;
    for(int i = 1; i <= 18; i++) pw[i] = pw[i - 1] * 10LL;

    int tc; cin >> tc;

    while(tc--)
    {
        solve();
    }

    return 0;
}
