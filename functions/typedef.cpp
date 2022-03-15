#include <iostream>
using namespace std;

// typedef allows us to create a type alias
typedef int id;

// in C++ 11
using counter = long;

int main()
{
  int a = 5;
  id b = 10;
  // id c = 10.2; warning: implicit conversion from 'double' to 'id' (aka 'int') changes value from 10.2 to 10 [-Wliteral-conversion]

  cout << a + b << endl;

  return 0;
}