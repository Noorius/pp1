#include <iostream>

using namespace std;

int main()
{
    int n, y;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int maxi = a[0][0];

    for (int i = 1; i < n; i++)
    {
        if (a[i][i] > maxi)
        {
            y = i;
            maxi = a[i][i];
        }
    }

    cout << "Maximum element is: " << maxi << " with"
         << " coordinates: " << y + 1 << ";" << y + 1;

    return 0;
}