#include <iostream>

using namespace std;

int main()
{
    int n, tmp, i;
    i = 0;
    cin >> n;
    for (; n > 0; n--)
    {
        cin >> tmp;
        while (tmp > 0)
        {
            if (tmp % 10 == 0)
                i++;
            tmp /= 10;
        }
    }
    cout << i << endl;
    return 0;
}
