#include <iostream>
#define ZERO 0

using namespace std;

/*
  The pre-compiler will resolve all directives (#)
  before send the code to compiler.
  We should only use directives when convenient.
*/

int main()
{
  #ifdef ZERO
    cout << ZERO << endl; // 0
  #else
    cout << 0 << endl;
  #endif

  #ifndef ONE
    cout << "ONE not defined" << endl;
  #endif

  #if DEBUG == 1
    cout << "end..." << endl;
  #endif

  return 0;
}