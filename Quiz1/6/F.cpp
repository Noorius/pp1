#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int d, c, p, n, m, m1;
    cin >> d >> c >> p >> n;
    m = d * 100 + c;
    m1 = m - (p * n);
    cout << m1 / 100 << " " << m1 % 100;

    return 0;
}