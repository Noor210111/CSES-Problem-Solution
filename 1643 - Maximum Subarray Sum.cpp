#include <bits/stdc++.h>

using namespace std;

const int N = 200010;
int n, a[N];

long long kadane()
{
    long long mss = INT_MIN;
    long long css = 0;

    for(int i = 1; i <= n; i++)
    {
        css += a[i];
        if(mss < css) mss = css;
        if(css < 0) css = 0;
    }

    return mss;
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];

    cout << kadane();

    return 0;
}
