#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string s=strs[0],conc="";
    
        for(int i=0;i<s.length();i++)
         {
             string sbstr=s.substr(0,i+1);
             cout<<sbstr<<endl;
            for(int j=1;j<strs.size();j++)
            {
                   if(strs[j].length()>=sbstr.length())
                    {    
                      string fsbstr=strs[j].substr(0,i+1);
                       if(sbstr==fsbstr)
                         continue;
                        else
                         return conc;
                     }
                    else
                     return conc;
            }   
                conc=sbstr;
            
        }
         return conc; 

       }
};

int main(){

    vector<string>arr={"dlower","dlower","dlowerght"};
    Solution obj;
    string res=obj.longestCommonPrefix(arr);
    cout<<res<<endl;
}