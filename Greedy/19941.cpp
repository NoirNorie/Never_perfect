// BOJ - 19941: 햄버거 분배

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, k; cin >> n >> k;
	string s; cin >> s;
	int sum = 0;
	for (size_t i = 0; i < s.length(); i++)
	{
		if (s[i] != 'P') continue;
		else // 주변에 집을 수 있는 햄버거가 있는지 검사한다.
		{
			bool chk = false;
			for (int a = k; a >0; a--)
			{
				if (i-a < 0) continue; // 앞으로 범위를 벗어난 경우 다음 경우를 본다.
				else
				{
					if (s[i-a] == 'H')
					{
						s[i - a] = 'X';
						chk = true;
						sum++;
						break;
					}
				}
			}
			if (chk == false) // 앞에 있는 햄버거부터 찾는데 없으면 뒤를 본다.
			{
				for (int a = 1; a <= k; a++)
				{
					if (i + a >= s.length()) break; // 뒤로 범위를 벗어난 경우 더 검사할 필요가 없다
					else
					{
						if (s[i+a] == 'H')
						{
							s[i + a] = 'X';
							chk = true;
							sum++;
							break;
						}
					}
				}
			}
		}
	}
	cout << sum;
}
