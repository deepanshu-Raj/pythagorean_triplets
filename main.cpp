#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int N;
    long int m,n;
    cin>>N;
    long int a,b,c;
    if(N%2==0)
    {
        m=N/2;
        n=1;
        a=m*m-n*n;
        c=m*m+n*n;
        b=2*m*n;
        if(a+b>c)
            cout<<a<<" "<<c<<endl;
        else
            cout<<-1<<endl;
    }
    else if(N%2!=0)
    {
        m=(N+1)/2;
        n=(N-1)/2;
        a=2*m*n;
        b=m*m-n*n;
        c=m*m+n*n;
        if(a+b>c)
            cout<<a<<" "<<c<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
