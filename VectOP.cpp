#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
vector<int> v1,v2;
int arr[]={3,4,2,52,21,23,253,3322};
v1.assign(arr,arr+8);
v2.assign(arr,arr+5);
cout<<"v1.size="<<v1.size()<<endl;
for(int i=0;i<v1.size();i++)
{
    cout<<v1[i]<<" ";
}
cout<<"v2.size="<<v2.size()<<endl;
for(int i=0;i<v2.size();i++)
{
    cout<<v2[i]<<" ";
}
return 0;
}