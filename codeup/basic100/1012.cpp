#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    double x; cin >> x;
    cout.setf(ios::showpoint); //0 표현
    cout.precision(7); // 소수점 자리 표현(정수부 개수 + 실수부 개수)
    cout << x << '\n';
}
