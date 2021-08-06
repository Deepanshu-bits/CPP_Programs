#include <iostream>
#include <type_traits>
using namespace std;

class A {

  int a, b;

protected:
  int c;
  void show() { cout << "protected of class A show function" << endl; }
};
class B : public A {

  int x, y;

public:
  void print() { show(); }
};
int main() {

  B obj;
  obj.print();
  return 0;
}