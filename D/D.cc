#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[1010] = { 0 }, b[1010] = { 0 };
	int n; 
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		b[a[i]] = 1;
	}
	int res = 0;
	for (int i = 1; i <= n; ++i)
		if (a[i] || b[i])
			++res;
	cout << res << endl;
	return 0;
}