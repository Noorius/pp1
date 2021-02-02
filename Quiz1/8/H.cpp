#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, y1, x2, y2, x0, y0;
    cin >> x1 >> y1 >> x2 >> y2;
    
    for (int i = 1, j = x1, j1 = y1; i <= 8; i++)
    {
        j++;
        j1++;
        if (j == x2 && j1 == y2 || x1 == x2 && y1 == y2)
        {
            cout << "Won";
            return 0;
        }
    }

    for (int i = 1, j = x1, j1 = y1; i <= 8; i++)
    {
        j--;
        j1++;
        if (j == x2 && j1 == y2)
        {
            cout << "Won";
            return 0;
        }
    }

    for (int i = 1, j = x1, j1 = y1; i <= 8; i++)
    {
        j--;
        j1--;
        if (j == x2 && j1 == y2)
        {
            cout << "Won";
            return 0;
        }
    }

    for (int i = 1, j = x1, j1 = y1; i <= 8; i++)
    {
        j++;
        j1--;
        if (j == x2 && j1 == y2)
        {
            cout << "Won";
            return 0;
        }
    }
    cout << "Lose";
    return 0;
}