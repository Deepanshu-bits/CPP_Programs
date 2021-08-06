#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        vector<vector<int > > result,fres;
        vector<vector<int> > emp;
        if(nums.size()<=2)
        return emp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++)
                for(int z=j+1;z<nums.size();z++)
                {
                    if(nums[i]+nums[j]+nums[z]==0)
                    {
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[z]);
                        result.push_back(temp);
                     
                    }
                        
                }
                    
        }
   
         fres.push_back(result[0]);
         int i=0,j=0;
        while(i<result.size())
        {
            while(j<fres.size())
            {
                if(result[i]!=fres[j])
                  j++;
                else
                {
                  i++;
                  j=0;
                }
            }
            if(i<result.size())
             fres.push_back(result[i]);
            i++;
            j=0;
        } 
            return fres;
    }
};

int main(){
vector<int>vr={0,0,0,0,0};
vector<vector<int> > v;
Solution obj;
 v=obj.threeSum(vr);
    for(int i=0;i<v.size();i++){
                for(int j=0;j<v[i].size();j++) {
                    cout<<v[i][j]<<"   ";

                }
                cout<<endl;
        
    

}
return 0;
}
