#include<iostream>
using namespace std;
   int main(){

     int a1,a2,b1,b2,c1,c2,d1,d2,e1,e2;
     cin>>a1>>b1>>c1>>d1>>e1>>a2>>b2>>c2>>d2>>e2;

     float total_a=0, total_b=0;
     float a1_cost=(d1/a1)*b1;
     float a2_cost=(d2/a2)*b2;
     float show_p1=(c1);
     float show_p2=(c2);
     float total_1=60*(a1_cost+e1)+show_p1;
     float total_2=60*(a2_cost+e2)+show_p2;
     if(total_1<total_2)
     cout<<"petrol";
     else 
     cout<<"diesel";

       return 0;
   }