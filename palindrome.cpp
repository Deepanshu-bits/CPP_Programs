#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        
        int q,r,result=0,check=x;

        while(x!=0)
        {
          r=x%10;
          x=x/10;
         if((result>INT_MAX/10 && r>7)||(result==INT_MAX))return false;
         if((result<INT_MIN/10 && r<-8)||(result==INT_MIN))return false;
            
         result=result*10+r;     
        }
         //cout<<"result="<<result<<"x="<<check<<endl;
         if(check<0)
         return false;
         else if(result==check){
            cout<<result<<endl;
         return true ;
        }
            else {
         //   cout<<"yeh print";
           return false;
            }
                
        return false;
    }
};
int main(){
    int n;
    cout<<"enter an integer"<<endl;
    cin>>n;
    string s="hello";
    cout<<"suze if sttsu"<<s.size();
    Solution obj;
    bool palin=obj.isPalindrome(n);
    cout<<palin;
}