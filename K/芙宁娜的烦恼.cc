#include <bits/stdc++.h>
using namespace std;
int a[110];
double b[110];

void solve()
{
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i) cin >> b[i];
    double ans = n;
    for (int i = 1; i <= n; ++i)
    {
        if (b[i] == 0) continue;
        double p = b[i] / 1e5;
        double cnt = (1 / p - 1) * (i - a[i]) + i;

        ans = min(ans, cnt);
    }

    printf("%.2lf\n", ans);
}

signed main()
{
    int _; cin >> _; while (_--)
        solve();

    return 0;
}
