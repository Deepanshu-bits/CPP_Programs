#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findd(vector<int> A,int m,int x)
{
    
    for(int i=0;i<m;i++){
        if(A[i]==x){
          //  cout<<"x found"<<x;
        return 0;
    }
    }
    return 1;
    
}
int Union(vector<int>v1,vector<int>v2,int m,int n)
{
    // vector<int>v2(B+0,B+n);
    //  vector<int>v1(A,A+m);
      for(int i=0;i<v1.size();i++)
      cout<<" "<<v1[i];
      cout<<endl;
      for(int i=0;i<n;i++)
      cout<<" "<<v2[i];
      cout<<endl;
   // vector<int> v2(m);
  //  copy(A+0,A+m,v2.begin());

     //  copy(B+0,B+n,v2.begin());
   
       int count=0;
       for(int i=0;i<n;i++)
       {
   
           if((findd(v1,m,v2[i]))==1)
            {
             cout<<"B[i]="<<v2[i]<<endl;
             count++;
              v1.push_back(v2[i]);
            }
         }
   //    cout<<count<<"count"<<endl;
       int res=v1.size();
       return res;
       
   }


int main() {
	//code
	int T,res;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	int m,n;
	cin>>m;
    cin>>n;
	//int A[m];
    
		vector<int>A(m);
 	vector<int>B(n);
// 	int A[m],B[n];
	for(int i=0;i<m;i++)
 	{
	    int v;
         cin>>v;
 	   A.push_back(v);
	}
 	for(int j=0;j<n;j++)
 	{
 	    int v;
 	    cin>>v;
 	  B.push_back(v);
 	}
	 res=Union(A,B,m,n);
	cout<< res<<" ";
	
	}
	
	return 0;
}