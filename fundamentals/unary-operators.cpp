#include "iostream"
using namespace std;

int main()
{
  int x = 2;
  int y = 1;

  x++; // postfix
  cout << x << endl;

  ++y; // prefix
  cout << y << endl;

  x--;
  cout << x << endl;

  --y;
  cout << y << endl;

  return 0;
}