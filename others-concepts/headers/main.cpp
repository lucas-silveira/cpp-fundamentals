#include <iostream> // When we use #include with <...> we are specifying for pre-compiler to lookup in the C++ library
#include "math/math.h" // When we use #include with "..." we are specifying for pre-compiler to lookup in our app code

using namespace std;

int main()
{
  cout << math::add(1, 2) << endl;

  return 0;
}