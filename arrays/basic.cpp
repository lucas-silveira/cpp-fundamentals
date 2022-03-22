#include <iostream>
using namespace std;

int main()
{
  // Arrays need to be homogeneous and have a fix size
  string names[5];

  names[0] = "Hanna";
  names[1] = "Peter";
  names[2] = "Mary";
  names[3] = "Mike";
  names[4] = "James";

  cout << names[0] << endl;
  cout << names[1] << endl;
  cout << names[2] << endl;
  cout << names[3] << endl;
  cout << names[4] << endl;
  // cout << names[5] << endl; Try to access the next memory index

  return 0;
}