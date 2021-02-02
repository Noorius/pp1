#include <iostream>

using namespace std;

int main()
{
    unsigned long n, l, r, sum = 0;
    cin >> n >> l >> r;
    unsigned long a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i >= (l - 1) && i <= (r - 1))
            sum += a[i];
    }

    cout << sum;
    return 0;
}