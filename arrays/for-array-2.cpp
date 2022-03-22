#include <iostream>
using namespace std;

/*
  Work with reference in a loop
  is faster than with a copy
  as we don't need duplicate values in memory.
*/

int main()
{
  string names[] = {"Hanna",  "Peter",  "Mary",  "Mike",  "James"};

  // Get reference
  for (string &n: names) {
    n.append("!!!");
  }

  cout << names[0] << endl; // Hanna!!!

  // Get read-only reference
  for (string const &n: names) {
    // n.append("!!!"); -> error
  }

  return 0;
}