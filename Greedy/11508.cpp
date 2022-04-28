// BOJ - 11508: 2+1 세일

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
	sort(vct.begin(), vct.end(), greater<int>()); // 비싼거 순으로 정렬
	
	int sum = 0, third = 1;
	for (int i = 0; i < n; i++, third++)
	{
		if (third % 3 == 0) continue;
		else sum += vct[i];
	}

	cout << sum;
}
