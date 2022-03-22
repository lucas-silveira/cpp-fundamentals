#include <iostream>
using namespace std;

int main()
{
  string names[] = {"Hanna",  "Peter",  "Mary",  "Mike",  "James"};

  for (string n: names) {
    cout << n << endl;
  }

  return 0;
}