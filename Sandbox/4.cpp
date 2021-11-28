#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double ans1,ans2,d;
    d=(b*b)-(4*a*c);
    if(d<0 || (a==0 &&  b==0) || (a==0 && c==0) || (b==0 && c==0))
        return 0;
    if(a==0 && b!=0 && c!=0){
        cout<<(-c)/b;
        return 0;
    }
    if(a!=0 && b==0 && c!=0){
        cout<<-sqrt(-c/a)<<" "<<sqrt(-c/a);
        return 0;
    }
    if(a!=0 && b!=0 && c==0){
        cout<<0<<" "<<(-b)/a;
        return 0;
    }

    if(d==0){
        cout<<(-1*b)/(2*a);
        return 0;
    }
    ans1=((-1*b)+sqrt(d))/(2*a);
    ans2=((-1*b)-sqrt(d))/(2*a);

    if(ans1==ans2)
        cout<<ans1;
    else
        cout<<ans1<<" "<<ans2;

    return 0;
}