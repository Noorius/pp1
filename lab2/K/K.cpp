#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N,q,y;
    cin >> N;
    q=1;
        while (y<N) {
            y=pow(q, 2); 
            if (y<=N)
                cout<<y<<endl;
            q++;  
        }
    return 0;
}
