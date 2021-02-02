#include<iostream>
#include <string.h>
using namespace std;
bool d(int N)
{
    if(1==N)
        return true;
    if(N%2!=0)
        return false;
    return d(N/2);
}
int main()
{
    int n;
    cin>>n;
    cout<<(d(n)?"Yes":"No");

}