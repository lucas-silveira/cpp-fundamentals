#include <iostream>
using namespace std;

int main()
{
  string names[] = {"Hanna",  "Peter",  "Mary",  "Mike",  "James"};

  // We can modify a value from array
  names[1] = "John";

  for (int i = 0; i < 5; i++)
  {
    cout << names[i] << endl;
  }

  return 0;
}