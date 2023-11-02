#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector <pair <int, int>> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        cin >> v[i].second;
    }

    sort(v.begin(), v.end());

    long long sum = 0, x = 0;
    for(int i = 0; i < n; i++)
    {
        x += v[i].first;
        sum += v[i].second - x;
    }

    cout << sum;

    return 0;
}
