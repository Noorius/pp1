#include <bits/stdc++.h>
using namespace std;

double Gpa(){
    int t, g=0;
    for(int i=0; i<3; i++){
        cin>>t;
        g+=t; 
    }
    if(g>=95 && g<=100)
        return 4.00;
    else if(g>=90 && g<=94)
        return 3.67;
    else if(g>=85 && g<=89)
        return 3.33;
    else if(g>=80 && g<=84)
        return 3.00;
    else if(g>=75 && g<=79)
        return 2.67;
    else if(g>=70 && g<=74)
        return 2.33;
    else if(g>=65 && g<=69)
        return 2.00;
    else if(g>=60 && g<=64)
        return 1.67;
    else if(g>=55 && g<=59)
        return 1.33;
    else if(g>=50 && g<=54)
        return 1.00;
    else
        return 0.00;
}

int main()
{
    int n, c=0;
    double sc=0;
    cin>>n;
    for(int i=0; i<n; i++){
        double gpa=Gpa();
        int t;
        cin>>t;
        sc+=(gpa*(double)t);
        c+=t;
    }
    cout<<sc;
    //cout<<sc/(double)c;

    return 0;
}