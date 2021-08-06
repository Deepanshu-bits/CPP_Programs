#include<iostream>
#include<stack>

using namespace std;

int prest(char x){
     if(x=='^')
     return 4;
     if(x=='*'||x=='/')
     return 3;
     if(x=='-'||x=='+')
     return 2;
     if(x=='('||x==')')
     return 0;
     
     return -1;
    
}
string infixToPostfix(string st)
{
    // Your code here
    string rest;
     std::stack<char>st;
    for(int i=0;i<st.size();i++)
    {
        if(st[i]=='('|| st[i]==')'|| st[i]=='*'||st[i]=='/' ||st[i]=='-'||st[i]=='+'||st[i]=='^')
        {
             if(st.empty() || st[i]=='(')
              st.push(st[i]);
              else
              {
                   if(st[i]==')')
                    {
                      while(!st.empty() && st.top()!='(')
                      {
                          char a=st.top()
                          rest=rest+a;
                          st.pop();
                      }
                      if(st.top()=='(')
                      st.pop();
                    }
                    else
                    {
                        if(prest(st[i])>prest(st.top()))
                         st.push(st[i]);
                         else
                        {
                          while(!st.empty() && (prest(st[i])<=prest(st.top())))
                          {
                            char a=st.top()
                            rest=rest+a;
                           st.pop();
                          }
                      
                      }
                     }
                  }
            }
       
        else
        {
            rest=rest +st[i];
        }
        
    }
    return rest;
}
int main() 
{ 
    string exp = "a+b*(c^d-e)^(f+g*h)-i"; 
    string re=infixToPostfix(exp); 
    cout<<re<<endl;
    return 0; 
} 
