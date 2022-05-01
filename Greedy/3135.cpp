#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int a, b; cin >> a >> b;
	int n; cin >> n;
	vector<int> vct(n);
	for (size_t i = 0; i < vct.size(); i++) cin >> vct[i];

	int mn = abs(a - b); // 직접 이동하는 횟수와 비교한다.
	for (size_t i = 0; i < vct.size(); i++)
	{
		if (mn > abs(b - vct[i]) + 1) // 즐겨찾기 값을 누름(+1) + 1Hz씩 이동 하는 경우와 각각 비교한다.
		{
			mn = abs(b - vct[i]) + 1;

		}
	}
	cout << mn;
}
