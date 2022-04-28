#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int y, m, d;
	scanf("%d.%d.%d", &y, &m, &d);
	printf("%04d.%02d.%02d", y, m, d); // 가끔 생각하는건데 printf가 더 쓸모있는 경우도 많다
}
