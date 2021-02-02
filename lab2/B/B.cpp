#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a % 2 != 0)
        cout << "Super" << endl;

    else if (a % 2 == 0)
    {
        if ((a > 20) || (5 > a && a > 2))
            cout << "Not Super" << endl;

        else if (20 > a && a > 6)
            cout << "Super" << endl;
    }

    return 0;
}