#include <iostream>
using namespace std;

// We must to declare the function param interface with the pointer operator
int exec(int (*funcName)(int, int), int a, int b) {
  // Dereferencing function and call it
  return (*funcName)(a, b);
}

// Using typedef to simplify function interface
using binaryOperator = int(*)(int, int); // * indicates a pointer

int exec2(binaryOperator func, int a, int b) {
  return (*func)(a, b);
}

int sum(int a, int b) {
  return a + b;
}

int subtract(int a, int b) {
  return a - b;
}

int main()
{
  // Passing the function memory reference
  cout << exec(sum, 2, 2) << endl; // 4
  cout << exec(subtract, 2, 2) << endl; // 0
  
  cout << exec2(sum, 2, 2) << endl; // 4

  return 0;
}