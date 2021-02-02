#include <iostream>

using namespace std;

int main()
{
    int ROW, COL, sum1 = 0, sum2 = 0;
    cin >> ROW >> COL;
    int a[ROW][COL];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            sum1 += a[i][j];
        }
        cout << "The sum of row number " << (i + 1) << " is " << sum1 << endl;
        sum1 = 0;
    }
    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            sum2 += a[j][i];
        }
        cout << "The sum of column number  " << (i + 1) << " is " << sum2 << endl;
        sum2 = 0;
    }

    return 0;
}