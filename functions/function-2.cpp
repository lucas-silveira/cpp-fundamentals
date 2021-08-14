#include <iostream>
using namespace std;

/*
  We must declare functions before using it.
  Another way is to declare a prototype/interface and then implement it.
  We can also use a header file to declare prototypes.
*/

void log(int number, bool newLine = false); // prototype/interface

int main() {
  log(3, true);
  log(3, false);
  log(2);

  return 0;
}

void log(int number, bool newLine) {
  cout << "Number: " << number;
  newLine ? cout << endl : cout << " ";
}