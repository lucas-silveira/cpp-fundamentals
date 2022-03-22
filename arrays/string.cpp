#include <iostream>
using namespace std;

/*
  String is an array, so we can access the characters by it index.
*/

int main()
{
  string alphabet = "abcdefghijklmnopqrstuvwxyz";

  cout << alphabet[9] << endl; // j

  for (char letter: alphabet)
  {
    cout << letter << ", ";
  }

  return 0;
}