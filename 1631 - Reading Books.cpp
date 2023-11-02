#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector <int> v(n);
    long long tsum = 0, sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++)
    {
        tsum += v[i];
        if(i < n - 1)
            sum += v[i];
    }

    int mx = *max_element(v.begin(), v.end());
    //cout << sum;

    if(sum < mx) cout << mx * 2;
    else cout << tsum;

    return 0;
}
