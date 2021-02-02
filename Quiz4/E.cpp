#include <bits/stdc++.h>
using namespace std;

int Year(int n){
    for(int i=0; i<n; i++){
        int count[10] = { 0 };
        int x = i;
        int count1 = 0, count2 = 0;
        while (x) {
            count[x % 10]++;
            x /= 10;
            count1++;
        }
        for (int j = 0; j < 10; j++) {
            if (count[j] == 1)
                count2++;
        }
        if (count1 == count2)
        return i;
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<Year(n);
    return 0;
}