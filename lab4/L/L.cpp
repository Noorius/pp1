#include <iostream>

using namespace std;

int main()
{
    int ROW, COL, sum = 0, mini=0, x = 0;
    cin >> ROW >> COL;
    int a[ROW][COL];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "coordinates of min elements:" << endl;

    for (int i = 0; i < COL; i++)
    {
        mini = a[0][i];
        for (int j = 1; j < ROW; j++)
        {
            if (a[j][i] < mini)
            {
                mini = a[j][i];
                x = j;
            }
        }
        cout << x + 1 << ";" << i + 1 << endl;
        sum += mini;
    }
    cout << "Their sum:" << endl;
    cout << sum;
    return 0;
}