#include <iostream>

using namespace std;

int main()
{
    int S, M, sum1 = 0, mini = 10000000, k, sum2 = 0;
    cin >> S >> M;
    int a[S][M];
    for (int i = 0; i < S; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> a[i][j];
            sum1 += a[i][j];
        }
        if (sum1 < mini)
        {
            mini = sum1;
            k = i;
        }
        sum1 = 0;
    }
    cout << k + 1;

    return 0;
}