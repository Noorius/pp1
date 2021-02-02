#include <iostream>

using namespace std;

int main()
{
    int ROW;
    cin >> ROW;
    int a[ROW][ROW];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < ROW; j++)
            cin >> a[i][j];
    }
    int maxi = a[0][0];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 1; j < ROW; j++)
            if (maxi < a[i][j])
                maxi = a[i][j];
    }
    cout << maxi;
    return 0;
}