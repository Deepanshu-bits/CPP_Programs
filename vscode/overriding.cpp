#include <iostream>
using namespace std;

class Base {
  int a;

public:
  void show() { cout << "base class" << endl; }
};
class Derive : public Base {
  int b;

public:
  void show() { cout << "derive class" << endl; }
};
int main() {
  Derive dobj;
  dobj.show();

  return 0;
}