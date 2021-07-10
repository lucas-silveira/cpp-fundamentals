#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i < 10; i++)
  {
    if (i == 2) continue; // go to next iteration

    if (i == 5) break; // go out from the loop

    cout << i << endl;
  }

  return 0;
}