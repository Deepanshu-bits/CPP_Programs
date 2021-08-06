#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int x=40;
    int& y=x;
    int *p=&x;
    int& z=*p;
   // y++;
   y++;
   z++;
    cout<<"x= "<<x<<"y="<<y<<"&y = "<<&y<<"x address="<<p<<endl;
    cout<<"z= "<<z<<"&z="<<&z;
    
    return 0;

}