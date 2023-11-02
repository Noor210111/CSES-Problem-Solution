#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    vector <int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    if(a[0] > 1)
    {
        cout << 1;
        return 0;
    }

    long long ssum = 0;
    for(int i = 0; i < n; i++)
    {
        if(ssum + 1 < a[i])
        {
            cout << ssum + 1;
            return 0;
        }
        ssum += a[i];
    }

    cout << ssum + 1;

    return 0;
}
