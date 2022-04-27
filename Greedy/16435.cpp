// BOJ - 16435: 스네이크 버드

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m; cin >> n >> m;
	vector<int> vct(n);
	for (size_t i = 0; i < vct.size(); i++) cin >> vct[i];
	sort(vct.begin(), vct.end());

	for (size_t i = 0; i < vct.size(); i++)
	{
		if (vct[i] <= m) m++;
		else break;
	}
	cout << m << '\n';

}
