#include <iostream>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int a[r][c];

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> a[i][j];
            if ((i + j) % 2 == 0)
                a[i][j]++;
            else
                a[i][j]--;
        }
    }
    cout << endl;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}