#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    float a; cin >> a;

    cout.setf(ios::showpoint);
    cout.precision(3);
    cout << a;
}
