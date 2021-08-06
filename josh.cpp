
#include<iostream>
using namespace std;

// int inc(int i)
// {  static int value=0;
//     value=value+i;
//     return(value);

// }
int main(){
    //    char *s[]={"knowledge","is","power"};
    //    char **p;
    //    p=s;
    //    printf("%s",++*p);
    //    printf("%s",*p++);
    //    printf("%s",++*p);
        
// int val=1;
// do{
//     val++;
//     ++val;
// }while(val++>25);
// printf("%d",val);
int a[4]={25,16};
for(int i=0;i<4;i++)
cout<<a[i]<<endl;
printf("%d %d",a[0] & a[1],a[1]| a[2]);

    return 0;
}