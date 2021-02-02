#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long a[n][n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (i + j == n - 1)
            {
                sum += a[i][j];
            }
        }
    }
    cout << sum;

    return 0;
}