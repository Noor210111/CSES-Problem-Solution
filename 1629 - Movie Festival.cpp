#include <bits/stdc++.h>

using namespace std;

bool sort2(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

int main()
{
    int n; cin >> n;

    vector <pair<int, int>> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), sort2);

    int c = 0, x = -1;
    for(int i = 0; i < n; i++)
        if(v[i].first >= x)
        {
            c++;
            x = v[i].second;
        }

    cout << c;
    return 0;
}
