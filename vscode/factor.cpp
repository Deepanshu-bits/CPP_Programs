#include <cmath>
#include <iostream>
using namespace std;
int mythOrFact(int N) {
  // Enter your code here
  int sum = 0;

  for (int i = 1; i <= N; i++) {
    if (N % i == 0) {
      sum += i;
      cout << "sum" << i << endl;
    }
  }
  float value = 1 + (3 * N) / 2;
  cout << "value" << value << " "
       << "sum" << sum << endl;
  if (sum <= value) {
    return 1;
  } else {
    return 0;
  }
}
int firstTwo(int N){
//Enter your code here
string str=to_string(N);
reverse(str.begin(),str.begin()+2);
string first_two=str.substr(0,2);
int num=stoi(first_two);
return num;
}

int main() {
 // int result = mythOrFact(9);
 // cout << result;
 int num=firstTwo(1234);
 cout<<num<<endl;
  return 0;
}