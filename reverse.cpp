#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int reverse(int x) {
       vector<int> arr;
        int  i=0;
        string str="";
        while(x>=0){
        arr.push_back(x%10);
            
            x=x/10;
           // cout<<x<<endl;
             }
        for(int i=arr.size();i>=1;i--){
            
           str=str+to_string( arr[i]);
            
            
        }
         int myint1 = stoi(str); 
         return myint1;
       
        
    }
};
int main(){
    int n,res;
    cout<<"enter an integer"<<endl;
    cin>>n;
    Solution obj;
    res=obj.reverse(n);
    cout<<res;
    return 0;
}