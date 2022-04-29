// BOJ - 13417: 문자열

#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <string>
using namespace std;

deque<char> dq; // 덱 쓰면 편함(안써도 문자열로 풀 수 는 있음)

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<char> vct(n);
		for (size_t i = 0; i < vct.size(); i++) cin >> vct[i];
		
		dq.push_back(vct[0]); // 카드 하나를 넣는다.
		
		for (size_t i = 1; i < vct.size(); i++)
		{
			if (dq.front() < vct[i]) dq.push_back(vct[i]);
			else dq.push_front(vct[i]);
		}
    
		while (dq.empty() != true)
		{
			cout << dq.front();
			dq.pop_front();
		}

		cout << '\n';
	}



}
