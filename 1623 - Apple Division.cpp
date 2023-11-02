#include <bits/stdc++.h>

#define nl '\n'

typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector <ll> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll ans = INT_MAX;
    for(int msk = 0; msk < (1 << n); msk++)
    {
        ll sumA = 0, sumB = 0;
        for(int i = 0; i < n; i++)
        {
            if(msk & (1 << i))
                sumA += v[i];
            else sumB += v[i];
        }
        ans = min(ans, abs(sumA - sumB));
    }
    cout << ans;

    return 0;
}
