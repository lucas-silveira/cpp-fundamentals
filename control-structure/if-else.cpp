#include <iostream>
using namespace std;

int main()
{
  double finalGrade;
  cout << "Please, enter the final grade: ";
  cin >> finalGrade;

  if (finalGrade >= 7)
  {
    cout << "Excellente grade" << endl;
    cout << "Congrats!" << endl;
  }
  else // we can omit the {} block
    cout << "Bad grade" << endl;

  return 0;
}