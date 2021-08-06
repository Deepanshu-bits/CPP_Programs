#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct ListNode {
    public:
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
  class Solution{
      public:

     ListNode* start;
     ListNode* check(int val){
     
      ListNode* node=new ListNode(val);  
         ListNode* t;
        
        if(start==NULL)
            start=node;
        else
        {
            t=start;
            while(t->next!=NULL)
                t=t->next;
            t->next=node;
           
        }
        return start;

     }
  };
int main(){

     ListNode* temp;
     cout<<"enter no. of value you insert"<<endl;
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
         int val;
         cin>>val;
         Solution obj;
         temp=obj.check(val);
     }
     while(temp!=NULL)
     {
         cout<<temp->val<<"->";
         temp=temp->next;
     }
     

        
}