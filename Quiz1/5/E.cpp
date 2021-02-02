#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, sum;
    cin >> n;
    sum = (n % 10) + (n / 10) % 10 + n / 100;
    cout << sum;
    return 0;
}