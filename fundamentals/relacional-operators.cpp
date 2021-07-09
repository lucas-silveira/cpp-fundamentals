#include "iostream"
using namespace std;

int main()
{
  bool result;
  int x;
  cout << "Please, enter a number: ";
  cin >> x;

  result = x > 10;
  cout << x << " > 10 = " << result << endl;

  result = x >= 10;
  cout << x << " >= 10 = " << result << endl;

  result = x < 10;
  cout << x << " < 10 = " << result << endl;

  result = x <= 10;
  cout << x << " <= 10 = " << result << endl;

  result = x == 10;
  cout << x << " == 10 = " << result << endl;

  result = x != 10;
  cout << x << " != 10 = " << result << endl;

  return 0;
}