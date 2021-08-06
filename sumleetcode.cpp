#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                 sum=sum+nums[j];
                
                if(sum==target)
                {
                for(int z=i;z<=j;z++)
                result.push_back(z);
                 return result;
                }
             
            }
            sum=0;
           
         }
        return result;
    }
};
int main(){
    vector<int> v,result;
    int target,n,data;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
     cout<<"enter the elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>data;
        v.push_back(data);
    }
        cout<<"Enter the target"<<endl;
        cin>>target;
   
    Solution obj;
       result= obj.twoSum(v,target);
        for(int i=0;i<result.size();i++)
            cout<<result[i];
  
    return 0;
}