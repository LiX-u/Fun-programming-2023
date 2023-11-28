#include <bits/stdc++.h>
using namespace std;

signed main() 
{
	int _; cin >> _; while (_-- )
	{
		int n; cin >> n;
		vector <int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];

		int ans = 0;
		for (int i = 1; i < n; i++)
			if (a[i - 1] > a[i])
				ans = max(ans, a[i - 1]);
		cout << ans << endl;
	}
	return 0;
}
