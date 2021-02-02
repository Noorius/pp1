#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    double p=(double)m / 100;
    double result= n + (n * p);
    cout <<result;
    return 0;
}