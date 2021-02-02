#include <iostream>

using namespace std;

int main()
{
    unsigned int n, i, j;
    cin >> n;
    i = (n % 100) % 10 + (n % 100) / 10;
    j = (n / 10000) % 10 + (n / 10000) / 10;
    if (i == j)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}