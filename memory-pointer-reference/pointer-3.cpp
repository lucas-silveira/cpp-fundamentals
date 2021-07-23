#include <iostream>
using namespace std;

int main()
{
  int arr[] = {47, 33, 72, 13, 88};

  int *p1 = &arr[0];
  cout << p1 << "\t" << *p1 << endl;

  p1++;
  cout << p1 << "\t" << *p1 << endl;

  p1++;
  cout << p1 << "\t" << *p1 << endl;
  cout << p1[0] << endl; // it's same as *
  cout << p1[1] << endl; // 13
  cout << p1[2] << endl; // 88

  int x = 123;
  int *p2 = &x;

  cout
      << p2
      << "\t"
      << *p2
      << "\t"
      << p2[0]
      << endl;

  *p2 = 321;
  cout << *p2 << endl; // 321
  cout << x << endl;   // 321

  return 0;
}