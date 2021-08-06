#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long x= (long)sqrt(n);
    long y=x;
    while(x*y<n)
    {
        if(x==y)
            x++;
        else
            y++;
    }
    //cout<<x<<" "<<y;
    cout<<x+y;
}
