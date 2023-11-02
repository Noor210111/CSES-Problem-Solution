#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    ll k;
    cin >> k;

    vector <int> vn(n);
    vector <int> vm(m);

    for(int i = 0; i < n; i++) cin >> vn[i];
    for(int i = 0; i < m; i++) cin >> vm[i];

    sort(vn.begin(), vn.end());
    sort(vm.begin(), vm.end());

    ll c = 0;
    for(int i = 0, j = 0; i < n; )
    {
        while(j < m && vn[i] - k > vm[j])
            j++;

        if(vn[i] - k <= vm[j] && vn[i] + k >= vm[j])
        {
            c++;
            i++;
            j++;
        }
        else
            i++;
    }

    cout << c;

    return 0;
}
