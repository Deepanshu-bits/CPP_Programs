#include <iostream>
#include <vector>
using namespace std;

class A {

private:
  int a, b;

public:
  void setdata(int x, int y) {
    a = x;
    b = y;
  }
  virtual void getdata() { cout << a << " " << b << endl; }
};
class B : public A {
private:
  int n, m;

public:
  void setvalue(int x, int y) {
    n = x;
    m = y;
  }
  void getdata() { cout << "class b " << endl; }
};

int main() {
  A aobj;
  aobj.setdata(2, 4);
  A *p;

  B obj;
  p = &obj;
  p->getdata();

  return 0;
}