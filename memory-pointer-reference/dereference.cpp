#include <iostream>
using namespace std;

int main()
{
  double pi = 3.14;
  double &piRef = pi;

  cout << piRef << endl;
  // * -> It's used to dereference and declare a pointer
  cout << *&pi << endl; // dereference

  return 0;
}