#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1005], b[1005];
    for (int i = 0; i < n; ++i) cin >> a[i];

    b[0] = a[0];
    int t = 1, max = a[0];//建立初始值
    for (int i = 1; i < n; ++i)
        if (a[i] >= max)
        {
            max = a[i];
            b[t++] = a[i];
        }

    cout << t << endl;
    for (int i = 0; i < t; ++i)
        cout << b[i] << " \n"[i == t - 1];

    return 0;
}
