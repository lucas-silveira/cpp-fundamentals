#include <iostream>
using namespace std;

int factorial(int n) {
  if (n == 1) return 1;

  return n * factorial(n - 1);
}

int main() {
  cout << factorial(3) << endl; // 6
  cout << factorial(4) << endl; // 24
  cout << factorial(5) << endl; // 120
  return 0;
}