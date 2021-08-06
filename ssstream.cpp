#include<iostream>
#include<sstream>
#include<vector>
#include<string>
//#include<conio.h>
using namespace std;
vector<int> parseInts(string str) {
stringstream ss;  
ss<<str;
vector<int> result;
char ch;
//string lele;
int tmp;
int count=0;
while(ss >> tmp) {
    count ++;
    result.push_back(tmp);
    ss >> ch;         
}
cout<<count<<endl;

return result;
}

int main(){
  
  string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;

}