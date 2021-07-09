#include "iostream"
using namespace std;

int main()
{
  bool sunny;

  cout << "It's sunny? ";
  cin >> sunny;

  string result = sunny ? ":)" : ":(";

  cout << result << endl;

  return 0;
}