#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (sqrt(a[i][j]) == int(sqrt(a[i][j])))
                cout << sqrt(a[i][j]) << " ";
            else
                cout << a[i][j] << " ";
        }
        cout << endl;
    }
}