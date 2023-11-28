#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T; 
	cin >> T;
	while (T--)
	{
		int n;
		char s[110];
		cin >> n >> s;

		int cnt = 0, score = 0;
		for (int i = 0; i < n; ++i)
		{
			if (s[i] == 'z')
				cnt++;
			if (s[i] == 'p')
				cnt = 0;
			score += cnt;
		}
		cout << score << endl;
	}
	return 0;
}
