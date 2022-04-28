// 2548: 대표 자연수

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
	for (int i = 0; i < n; i++) cin >> vct[i];
	sort(vct.begin(), vct.end()); // 작은 수가 대표 값이 되므로 오름차순으로 정렬한 후 비교한다.

	long long mn = 9999999999, nat = 0;
	for (size_t i = 0; i < vct.size(); i++)
	{
		int sum = 0;
		for (size_t j = 0; j < vct.size(); j++)
		{
			sum += abs(vct[i] - vct[j]);
		}

		if (sum < mn)
		{
			mn = sum;
			nat = vct[i];
		}
	}

	cout << nat;
}
