#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
vector<int> fres,result={1,2,3,4,5,1,3,3,3,3,3,4,4,4,4,5,6};
    

 fres.push_back(result[0]);
         int i=0,j=0;
        while(i<result.size())
        {
            while(j<fres.size())
            {
                if(result[i]!=fres[j])
                  j++;
                else
                  i++;
            }
             if(i<result.size())
             fres.push_back(result[i]);
            
             i++;
            j=0;
        }
        for(int i=0;i<fres.size();i++){
            cout<<" "<<fres[i];
        }

    return 0;
}