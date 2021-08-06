#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<sstream>
#include<string.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
       // const int I=1,V =5,X =10,L=50,C=100,D=500,M=1000;
        int sum=0,n;
         char str[50];
                strcpy(str,s.c_str());
        
            for(int i=0;i<strlen(str);i++){
                
                if((str[i]=='I')&&(str[i+1]=='V')){
                    sum+=4;
                 
                    i++;
                if(strlen(str)==2)
                 return sum;
                }
                else if((str[i]=='I')&&(str[i+1]=='X')){
                    sum+=9;
                   i++;
                  if(strlen(str)==2)
                  return sum;
                }
                else   if((str[i]=='X')&&(str[i+1]=='L')){
                    sum+=40;
                i++;
               if(strlen(str)==2)
                 return sum;
                }
                else   if((str[i]=='X')&&(str[i+1]=='C')){
                    sum+=90;
                i++;
               if(strlen(str)==2)
                 return sum;
                }
                else   if((str[i]=='C')&&(str[i+1]=='L')){
                sum+=400;
            i++;
           if(strlen(str)==2)
             return sum;
            }
                else   if((str[i]=='C')&&(str[i+1]=='M')){
                sum+=900;
            i++;
           if(strlen(str)==2)
             return sum;
            }
            else{
               // stringstream chnge;
               
                if(!strcmp(str[i],"I"))
                sum+=1;
                else if(!strcmp(str,"V"))
                sum+=5;
                else if(!strcmp(str,"X"))
                sum+=10;
                else if(!strcmp(str,"L"))
                sum+=50;
                else if(!strcmp(str,"C"))
                sum+=100;
                else if(!strcmp(str,"D"))
                sum+=500;
                else if(!strcmp(str,"M"))
                sum+=1000;
                else
                {
                    cout<<"worng input"<<endl;
                }
                
                
               
               
            }

                
        }
        return sum;
        
    }
};
int main(){

    string s="II",strs="12345";
    Solution obj;
    int number=obj.romanToInt(s);
    int str=stoi(strs);
   // char cha[100];
   
   //strcpy(cha,s.c_str());
    cout<<number<<endl<<str;
    return 0;
}