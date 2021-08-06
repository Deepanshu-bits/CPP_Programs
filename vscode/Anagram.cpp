#include <iostream>
#include <vector>
using namespace std;

bool isAnagram(string &a, string &b) {

  int count[256] = {0};

  for (int i = 0; i < a.length(); i++) {
    count[a[i]]++;
    count[b[i]]--;
  }

  for (int i = 0; i < 256; i++) {
    cout << "count array" << count[i] << " " << i << endl;
    if (count[i] != 0)
      return false;
  }
  return true;
}
int main() {
  string a = "helly";
  string b = "hellz";
  if (isAnagram(a, b))
    cout << "YES";
  else {
    cout << "NO";
  }

  return 0;
}