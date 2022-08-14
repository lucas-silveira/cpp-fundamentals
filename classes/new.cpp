#include <iostream>
using namespace std;

int main()
{
  int x = 5; // memory allocation in the Stack
  int *y = new int(10); // memory allocation in the Heap (int = 4 bytes) | malloc() + constructor()

  cout << *y << endl; // 10
  cout << x * *y << endl; // multiplying = 50

  delete y; // freeing up space | free() + destructor

  int *w = new int[100]; // 4 bytes * 100 = 400 bytes
  w[50] = 123;
  cout << w[50] << endl;

  delete[] w; // freeing up multiple spaces

  return 0;
}