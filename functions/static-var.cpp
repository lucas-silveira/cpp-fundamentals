#include <iostream>
using namespace std;

int nextId() {
  /*
    It ensure the variable will only be initialized once.
    That is, the state will be shared between function calls.
  */
  static int id = 1;

  return id++;
}

int main()
{
  cout << nextId() << endl; // 1
  cout << nextId() << endl; // 2
  cout << nextId() << endl; // 3
  cout << nextId() << endl; // 4

  return 0;
}