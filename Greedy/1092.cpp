// BOJ - 1092: 배

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> crane(n);
	for (size_t i = 0; i < crane.size(); i++) cin >> crane[i];
	sort(crane.begin(), crane.end(), greater<int>());

	int m; cin >> m;
	vector<int> box(m);
	for (int i = 0; i < m; i++) cin >> box[i];
	sort(box.begin(), box.end(), greater<int>());

	int t = 0;

	if (box[0] > crane[0]) cout << -1 << '\n';
	else
	{
		while (box.empty() != true)
		{
			t++;
			for (int i = 0; i < crane.size(); i++)
			{
				for (int j = 0; j < box.size(); j++)
				{
					if (crane[i] >= box[j])
					{
						box.erase(box.begin() + j);
						break;
					}
				}
			}
			
		}
		cout << t << '\n';
	}

}
