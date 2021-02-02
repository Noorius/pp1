#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    //int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j == n)
                cout << i + 1;
            else
                cout << ".";
        }
        cout << endl;
    }
    return 0;
}