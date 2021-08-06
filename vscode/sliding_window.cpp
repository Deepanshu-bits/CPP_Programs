#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={3,4,2,1,3,-1,1,5,4,0,-1,-5};
    int sum_max=0,sum=0;
    int sub_size;
    cout<<"enter sub arry size"<<endl;
    cin>>sub_size;

    for(int i=0;i<sub_size;i++ )
    {
      sum_max+=arr[i]  ;
    }
    sum=sum_max;
    int result;
    for(int i=sub_size;i<12;i++)
    {

       sum+=arr[i]-(arr[i-sub_size]);
        sum_max=max(sum_max,sum);
        //cout<<sum_max<<endl;
    }
    cout<<result;
    return 0;
}