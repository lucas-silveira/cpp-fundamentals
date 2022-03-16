#include <iostream>
using namespace std;

int add(int x, int y) {
  return x + y;
}

// identifier overload
int add(int x, int y, int z) {
  return x + y + z;
}

// identifier overload
double add(double x, int y) {
  return x + y;
}

/*
  For we use the identifier overload, we need to change the function signature.
  The function return type is not treated as signature.
  
  The function signature:
    name(arg: type)
*/

int main()
{
  cout << add(1, 2) << endl;
  cout << add(1, 2, 3) << endl;
  cout << add(1.2, 2) << endl;

  return 0;
}