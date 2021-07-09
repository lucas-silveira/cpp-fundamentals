#include "iostream"
using namespace std;

int main()
{
  // binary
  cout << 2 + 2 << endl      // 4
       << 2 - 2 << endl      // 0
       << 2 * 2 << endl      // 4
       << 2 / 2 << endl      // 1
       << 10 % 2 << endl     // 0
       << 2 + 2 + 2 << endl; // 6 (this is a binary operator yet)

  // Simple example
  int x;
  int y;
  int result;

  cout << "Let's sum two numbers?" << endl;
  cout << "Please, type a number: ";
  cin >> x;

  cout << "Nice! Now, type another number: ";
  cin >> y;

  result = x + y;

  cout << "The result is: " << result << endl;

  return 0;
}