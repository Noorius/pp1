#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int sum_even = 0, sum_odd = 0;
    cin >> s;
    for (int i = 1; i <= s.size(); i++)
    {
        if (i % 2 == 0)
            sum_even += s[i - 1]-'0';//
        else if (i % 2 != 0)
            sum_odd += s[i - 1]-'0';
    }
    cout<<sum_even;
    //if (sum_even == sum_odd)
        //cout << "YES";
    //else if (sum_even != sum_odd)
        //cout << "NO";
    return 0;
}