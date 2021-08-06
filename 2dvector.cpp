#include<iostream>
#include<vector>
#include<string>
using namespace std;
    class TwoD{

    int r,c;
     vector<vector<int> >v,Vr;
    public:

    void scanvector( ){

        int data;
            cout<<"Enter rows and columns of the matrix"<<endl;
            cin>>r>>c;
        // vector<vector<int>>v;
    
            for(int i=0;i<r;i++){
        
            vector<int> temp;
            for(int j=0;j<c;j++){
            
           // cin>>data;
            temp.push_back(0);

        }
            v.push_back(temp);

        }
    

        }
        void display(){
            
            for(int i=0;i<v.size();i++){
                for(int j=0;j<v[i].size();j++) {
                    cout<<v[i][j]<<" ";

                }
                cout<<endl;
        
            }


        }
        void clear(){
         for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                
            if(v[i]==v[j]){
                cout<<"i="<<i<<" "<<"j="<<j;
                v.erase(v.begin()+(j));
            // break;
                
           }
           j--;
                
        }
        }
        }
    };



    int main(){

    TwoD obj;
    //vector<vector<int> >V,Vr;
    obj.scanvector();
    obj.display();
    cout<<"hello"<<endl;
    obj.clear();
    obj.display();


        return 0;
    }