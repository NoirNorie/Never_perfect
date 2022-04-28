// BOJ - 1758: 알바생 강호

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> vct(n);
	for (size_t i = 0; i < vct.size(); i++) cin >> vct[i];
	sort(vct.begin(), vct.end(),greater<int>());
  
	long long tips = 0, waits = 0; // int로 할 경우 오버플로로 틀렸다고 나온다
  
	for (size_t i = 0; i < vct.size(); i++)
	{
		long long calc = vct[i] - waits;
		if (calc < 0) break;
		else tips += calc;
		waits++;
	}
	cout << tips;
}
