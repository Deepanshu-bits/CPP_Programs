#include<iostream>
#include<vector>
using namespace std;
int median(int A[],int N)
{
    
    sort(A,A+N);
    if(N%2==1)
    {
      int index=N/2;
     return A[index];
    }
    else{
        //int index=N/2;
      //  cout<<"index="<<index<<endl;
        cout<<A[(N/2)-1]<<" "<<A[N/2]<<endl;
        int mdn=(A[(N/2)-1]+A[N/2])/2;


        return mdn;
    }
    
    
    //your code here
    //If median is in fraction then convert it to integer and return
}
int main()
{
    // int n;
    // cout<<"Enter the size of the array"<<endl;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     int a;
    //   cin>>a;
    //     arr[i]=a;


    // } 
    //  int* ip,*iq;
    //  ip=min_element(arr,arr+n);
    //  iq=max_element(arr,arr+n);
    //  cout<<*ip<<" "<<*iq;
    
  
    // return 0;
    int arr[]={2,8,3,4};
//     int temp[7];
//     int ind=0;
//     int count=0;
//     for(int i=0;i<7;i++){
//         if(arr[i]!=0)
//         temp[ind++]=arr[i];
//         else
//         {
//            count++; /* code */
//         }

//     }
//     for(int i=ind;count!=0;i++){
//       temp[i]=0;
//       count--;
//     }
//     for(int i=0;i<7;i++){
//         cout<<temp[i]<<" ";
//     }
// cout<<"count"<<count<<"ind"<<ind;
    int n=median(arr,4);
   cout<<n;
 }

 