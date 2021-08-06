#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
int x=19;
    const  int &y=x;
    x=x+10;
    cout<<"x= "<<x<<"y= "<<y;
    return 0;

}