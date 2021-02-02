#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool k = true;
    for (int i = 0, j = s.size() - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
            k = false;
    }

    if (k == true)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}