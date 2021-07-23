#include <iostream>
using namespace std;

int main()
{
  int *p1 = nullptr;
  int *p2; // same

  int x = 5;
  int y = 10;

  p1 = &x;
  cout << p1 << endl;

  p1 = &y;
  cout << p1 << endl;

  p2 = p1; // copy the memory address
  cout << *p2 << endl;

  return 0;
}