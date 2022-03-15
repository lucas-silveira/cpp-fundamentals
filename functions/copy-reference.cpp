#include <iostream>
using namespace std;

// Passing by copy
void incrementCopy(int value) {
  value++;
}

// Passing by reference
void incrementReference(int &value) {
  value++;
}

int main()
{
  int x = 1;
  
  incrementCopy(x);
  cout << x << endl; // 1
  
  incrementReference(x);
  cout << x << endl; // 2

  return 0;
}