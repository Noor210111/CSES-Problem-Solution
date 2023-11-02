#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector <int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int cnt = 0;
    for(int i = 0, j = n - 1; i <= j;)
    {
        if(v[i] + v[j] <= x)
        {
            i += 1;
            j -= 1;
            cnt++;
        }
        else
        {
            j--;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
