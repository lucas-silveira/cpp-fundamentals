#include "iostream"
using namespace std;

int main()
{
  double finalGrade;
  cout << "Please, enter the final grade: ";
  cin >> finalGrade;

  bool goodBehavior;
  cout << "Is he/she well-behaved? ";
  cin >> goodBehavior;

  cout << endl
       << "Analysis Result:" << endl;

  bool goodStudent = finalGrade >= 9 && goodBehavior; // AND
  cout << "Is he/she good student? " << goodStudent << endl;

  bool averageStudent = (finalGrade >= 9) ^ goodBehavior; // XOR
  cout << "Is he/she average student? " << averageStudent << endl;

  bool badStudent = (finalGrade <= 3) && !goodBehavior; // NOT
  cout << "Is he/she bad student? " << badStudent << endl;

  bool loanCancelled = (finalGrade <= 3) || !goodBehavior; // OR
  cout << "Is he/she had loan cancelled? " << loanCancelled << endl;

  return 0;
}