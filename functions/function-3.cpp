#include <iostream>
using namespace std;

int max(int n1, int n2) {
  return n1 >= n2 ? n1 : n2;
}

int main()
{
  int n1, n2, n3;

  cout << "Please, enter the first number: ";
  cin >> n1;
  cout << "Please, enter the second number: ";
  cin >> n2;
  cout << "Please, enter the third number: ";
  cin >> n3;

  cout << "Max: " << max(n1, max(n2, n3));

  return 0;
}