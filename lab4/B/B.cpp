#include <iostream>

using namespace std;

int main()
{
    int ROW, maxi = -10000000;
    cin >> ROW;
    int a[ROW][ROW];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            cin >> a[i][j];
            if (maxi < a[i][j])
                maxi = a[i][j];
        }
    }
    int secondmax = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            if (maxi > a[i][j] && a[i][j] > secondmax)
            {
                secondmax = a[i][j];
            }
        }
    }
    cout << secondmax;
    return 0;
}