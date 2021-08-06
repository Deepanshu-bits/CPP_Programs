#include<iostream>
#include<string>
using namespace std;
string conVowUpp(string& str)
{
    // Stores the length
    // of str
    int N = str.length();
 
    for (int i = 0; i < N; i++) {
        if (str[i] == 'a' || str[i] == 'e'
            || str[i] == 'i' || str[i] == 'o'
            || str[i] == 'u') {
            str[i] = str[i] - 'a' + 'A';//asci a=97, A=65;
        }
        else{
            str[i]=str[i]- 'a' +'a'+1;
            //str[i]=str[i] + 'a' + 1;
        }
    }
    return str;
}
int main(){
    string s="cha @#$racters";
    string res=conVowUpp(s);
    cout<<res;
    return 0;
}