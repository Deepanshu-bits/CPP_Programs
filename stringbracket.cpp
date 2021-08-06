#include<iostream>
#include<string>
#include<vector>
#include<string.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        if(s=="")
            return true;
        if(s.size()%2==1)
            return false;
      
        int total=s.size()-1;
      
        
        for(int i=0;i<s.size();i++)
        {
            if((s[i]=='(')&&(s[i+1]==')'))
            {
                i=i+1;
                continue;
             }   
            else if((s[i]=='{')&&(s[i+1]=='}'))
            {
                 i=i+1;
                continue;
             }
            else if((s[i]=='[')&&(s[i+1]==']'))
            {
                i=i+1;
                continue;
            }
            else if((s[i]=='(')&&(s[total-i]==')'))
                   continue;
             else if((s[i]=='{')&&(s[total-i]=='}'))
                   continue;
             else if((s[i]=='[')&&(s[total-i]==']'))
                   continue;
            else
            {
                if((s[i-1]=='(')&&(s[i]==')'))
                 return true;
                 else if((s[i]=='{')&&(s[i-1]=='}'))
                 return true;
                 else if((s[i-1]=='[')&&(s[i]==']'))
                 return true;
                 else{
                 
                  return false;
                }
            }
            
            
        }
        return true;
        
    }
            
};

int main(){

    string s="{{}}";
    int n=s.length();
    //char ch[n];
    //strcpy(ch,s);
    

   
    //cout<<ch[i]<<ch[i+1];

  Solution obj;
    bool res=obj.isValid(s);
   cout<<"result"<<res;
    return 0;

}