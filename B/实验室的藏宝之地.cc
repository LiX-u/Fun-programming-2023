#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int oddmin = 0x3f3f3f3f, evenmax = -0x3f3f3f3f;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        if (x > 0)
            sum += x;
        if (x > 0 && x % 2)
            oddmin = min(oddmin, x);
        if (x < 0 && x % 2)
            evenmax = max(evenmax, x);
    }

    if (sum % 2 == 0) sum = max(sum - oddmin, sum + evenmax);

    cout << sum << endl;
    return 0;
}
