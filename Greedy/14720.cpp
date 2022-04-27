// BOJ - 14720: 우유 축제

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	int sum = 0;
	int st = 0;
	vector<int> vct(n);
	for (size_t i = 0; i < vct.size(); i++) cin >> vct[i];

	for (size_t i = 0; i < vct.size(); i++)
	{
		if (st != vct[i]) continue; // 마실 수 없으면 건너뛴다.
		else
		{
			sum++;
			st++;
			if (st > 2) st = 0;
		}
	}
	cout << sum << '\n';
}
