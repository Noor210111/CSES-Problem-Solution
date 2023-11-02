#include <iostream>
typedef long long ll;

using namespace std;

const int N = 300030;
int a[N];

int main()
{
    int n; cin >> n;
    ll x; cin >> x;

    for(int i = 1; i <= n; i++) cin >> a[i];

    ll c = 0, sum = 0;
    for(int i = 1, j = 1; i <= n; i++)
    {
        sum += a[i];
        for(; sum >= x; j++)
        {
            if(sum == x) c++;
            sum -= a[j];
        }
    }

    cout << c;

    return 0;
}
