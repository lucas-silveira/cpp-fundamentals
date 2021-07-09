#include "iostream"
using namespace std;

int main()
{
  int x;
  cout << "Please, type a number: ";
  cin >> x;

  x += 10; // x = x + 10;
  cout << x << " (+ 10)" << endl;

  x -= 9; // x = x - 9;
  cout << x << " (- 9)" << endl;

  x *= 8; // x = x * 8;
  cout << x << " (* 8)" << endl;

  x /= 7; // x = x / 7;
  cout << x << " (/ 7)" << endl;

  x %= 6; // x = x % 6;
  cout << x << " (% 6)" << endl;

  return 0;
}