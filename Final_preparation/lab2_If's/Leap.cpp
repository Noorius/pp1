#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%4==0){
        if(n%400==0){
            if(n%100!=0){
                cout<<"YES";
                return 0;
            } 
            cout<<"YES";
            return 0;
        }
        cout<<"YES";
        return 0;
    }
    else
        cout<<"NO";
    


    return 0;
}