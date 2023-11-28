#include <bits/stdc++.h>
using namespace std;

int a[110][110];
int pos[110];

signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j < n; ++j)
            cin >> a[i][j];
        pos[i] = 1;
    }

    int ans = 0;
    while (1)
    {
        bool flag = 1;      // 是否还有人没完成比赛
        for (int i = 1; i <= n; ++i) if (pos[i] < n) flag = 0;
        if (flag) break;

        ++ans;
        bool uv[110][110] = { 0 };

        bool waflag = 1;    // 是否无法比赛
        for (int i = 1; i <= n; ++i)
        {
            if (pos[i] == n) continue;

            int u = i, v = a[i][pos[i]];
            if (u > v) swap(u, v);

            if (uv[u][v])
            {
                waflag = 0;
                pos[u]++;
                pos[v]++; 
            }
            uv[u][v] = 1;
        }

        if (waflag)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;

    return 0;
}
