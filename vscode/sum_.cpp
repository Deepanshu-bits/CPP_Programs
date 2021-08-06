// [4, 5, 3, 2, 5]
// 3
// 0 3
// 2 4
// 1 3
// Output
// 14 (4+5+3+2)
// 10 (3+2+5)
// 10 (5+3+2)
#include<iostream> 
#include<vector>
using namespace std;
int main (){
int arr[]= {4,5,3,2,5};
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int f,t;
        cin>>f>>t;
        int sum=0;
        for(int j=f;j<=t;j++){
           sum+=arr[j];
       }
       cout<<sum<<endl;
       
    }

    return 0;
}