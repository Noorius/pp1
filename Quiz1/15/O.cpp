#include <iostream>
using namespace std;

int main()
{
    char sign;
    float n1, n2;
    cin >> n1;
    cin >> sign;
    cin >> n2;

    if (sign == '+')
        cout << n1 + n2;

    if (sign == '-')
        cout << n1 - n2;

    if (sign == '*')
        cout << n1 * n2;

    if (sign == '/')
        cout << n1 / n2;

    return 0;
}