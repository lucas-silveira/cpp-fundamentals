#include <iostream>
using namespace std;

int add(int x, int y) {
  return x + y + 10;
}

namespace calc {
  int add(int x, int y) {
    return x + y + 100;
  }
}

int main()
{
  cout << add(1, 2) << endl; // 13
  cout << calc::add(1, 2) << endl; // 103

  return 0;
}