#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int j = 0; j < 2*n; j++)
    {
        for (int i = 1; i <= (2 * n) - 1; i++)
        {
            if (i <= n + j && i >= n -j)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
