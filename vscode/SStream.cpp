#include<iostream>
#include<string>
#include<sstream>
//read input from whole line and convert them into integer type by spliting in space function;
using namespace std;
int main()
{
    string str,whstr;

    getline(cin,str);
    
    stringstream ss(str);
    int a[4],i=0;

    while(getline(ss,whstr,' '))//' ' is spliter function
    {
        a[i]=stoi(whstr);
        i++;
  }
    for(int i=0;i<4;i++)
    cout<<a[i]<<" ";
return 0;
}