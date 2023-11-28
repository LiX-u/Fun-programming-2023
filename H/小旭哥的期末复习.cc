#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxcnt = 0, sum = 0;
    while (n--)
    {
        int x;
        cin >> x;
        sum += x;
        maxcnt = max(maxcnt, x);
    }
    if (sum - maxcnt >= maxcnt)
        cout << (sum + 1) / 2 << endl;
    else
        cout << maxcnt << endl;
    return 0;
}
