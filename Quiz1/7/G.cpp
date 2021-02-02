#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, m, sum = 0;
    float avg;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        sum += m;
    }
    avg = (float)sum / n;
    cout << "Average: " << avg << endl;
    cout << "Sum: " << sum << endl;
    return 0;
}