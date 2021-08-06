#include<iostream>
#include<vector>
using namespace std;

class A{

private:
int a;
public:
A(){
    cout<<"const of A"<<endl;
}
void fun(){cout<<"class A"<<endl;}
};
class B:public A{
private:
int b;
public:
B(){
    cout<<" const of B"<<endl;
}
void fun(){cout<<"class B"<<endl;}

};
int main()
{
    A a;
    a.fun();

  return 0;

} // namespace std;

