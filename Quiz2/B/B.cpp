#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int ROW;
    cin>>ROW;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n-fabs(offset); ++i) {
        if(offset <= 0) {
           sum1 += m[i][i-offset];
        }
        else {
           sum1 += m[i+offset][i];
        }

    return 0;
}