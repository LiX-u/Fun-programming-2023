#include <bits/stdc++.h>
using namespace std;
#define ll long long

inline ll getans(ll r, ll p)
{
	ll ans = 0;
	if (r >= p)
	{
		ans = 1;
		r -= p;
	}
	ans += r / (p << 1);
	return ans * p;
}

int main()
{
	ll a, b;
	cin >> a >> b;
	ll sum = 0;
	for (int i = 0; i <= 30; ++i)
	{
		sum += getans(b, 1LL << i) - getans(a - 1, 1LL << i);
	}
	cout << sum;
	return 0;
}
