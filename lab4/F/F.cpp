#include <iostream>

using namespace std;

int main()
{
    int ROW, x, y;
    cin >> ROW;
    int a[ROW][ROW];
    int maxi = -10000000;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            cin >> a[i][j];
            if (maxi < a[i][j])
            {
                maxi = a[i][j];
                x = i;
                y = j;
            }
        }
    }
    cout << x + 1 << " " << y + 1;
    return 0;
}