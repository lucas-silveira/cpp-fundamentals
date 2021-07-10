#include <iostream>
using namespace std;

int main()
{
  int number = 0;
  int total = 0;
  int quantity = 0;

  while (number != -1)
  {
    cout << "Please, enter a number or -1 to finish: ";
    cin >> number;

    if (number != -1)
    {
      total += number;
      quantity++;
    }
  }

  // cast
  double average = ((double)total) / quantity;
  cout << average << endl;

  return 0;
}