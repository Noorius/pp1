#include <iostream>

using namespace std;

int main()
{
    unsigned int n, n1, i, j,k;
    unsigned int a[i],b[j],c[k];
    
    cin >> n;    
    for (int z = 0; z < n; z++)
        cin >> a[i];
    cin >> n1;
    for (int z = 0; z < n1; z++)
        cin >> b[j];
    
    while (i<n && j<n1) {
        if (a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }
    while (i<n)
        c[k++]=a[i++];
    while (j<n1)
        c[k++]=b[j++];

    

    for (int z = 0; z < (n+n1); z++)
        cout << c[z] << " ";
}