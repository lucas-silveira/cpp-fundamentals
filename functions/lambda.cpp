#include <iostream>
using namespace std;

/*
 Lambda is an anonymous function
*/

// Using type inference is util to declare lambda functions
auto sum = [](int x, int y) -> int { return x + y; };

int exec(int (*funcName)(int, int), int a, int b) {
  return (*funcName)(a, b);
}

int main()
{
  cout << sum(1, 2) << endl; // 3

  cout << exec([](int x, int y) -> int { return x + y; }, 1, 2) << endl; // 3

  return 0;
}