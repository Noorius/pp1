#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, h, m;
    cin >> n;
    m = n / 60;
    n = n % 60;
    h = m / 60;
    m = m % 60;
    cout << h << ":" << m << ":" << n;
    return 0;
}