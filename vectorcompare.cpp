#include<vector>
#include<iostream> 
using namespace std; 
  
// Check if all elements is equal or not 
int main() 
{ 
  // Comparing equal vectors 
  vector<int> result{{0,0,0},{0,0,0},{0,0,0},{0,0,0}}; 
  
   for(int i=0;i<result.size();i++){
            for(int j=i+1;j<result.size();j++){
                
            if(result[i]==result[j]){
                
             result.erase(result.begin()+j);
                
           }
                
        }
        }
  
   return 0; 
} 