#include <iostream>
using namespace std;

int main()
{
  int x = 7;
  int &xRef = x; // set variable's memory reference to the "x" memory reference

  cout << x << "\t" << &x << endl;
  cout << xRef << "\t" << &xRef << endl;

  x++;
  cout << xRef << endl; // 8

  xRef--;
  cout << x << endl; // 7

  return 0;
}