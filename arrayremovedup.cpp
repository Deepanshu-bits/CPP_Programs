#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       //  nums.erase(unique(nums.begin(),nums.end()),nums.end());
       vector<int>:: iterator it;
       int n;
     
       n=unique(nums.begin(),nums.end())-nums.begin();
         cout<<n<<endl;
       return n;

      // nums.resize(distance(nums.begin(),it));
        // for( it=nums.begin();it!=nums.end();it++){
          //   cout<<" "<<*it;
         }
       //  return distance(nums.begin(),nums.end());
    //}
};
int main(){
    vector<int> v={0,0,1,2,2,2,3,3,4,4,5,5};
    Solution obj;
   int length=obj.removeDuplicates(v);
   cout<<"length is"<<length;
}