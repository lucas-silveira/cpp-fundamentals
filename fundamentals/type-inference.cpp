#include "iostream"
using namespace std;

int main()
{
  // static type
  int a = 1;
  double b = 1.2;
  bool c = true;

  cout << typeid(a).name() << endl  // i (int)
       << typeid(b).name() << endl  // d (double)
       << typeid(c).name() << endl; // b (bool)

  // type inference
  auto d = 1;
  auto e = 1.2;
  auto f = true;

  cout << typeid(d).name() << endl  // i (int)
       << typeid(e).name() << endl  // d (double)
       << typeid(f).name() << endl; // b (bool)

  return 0;
}