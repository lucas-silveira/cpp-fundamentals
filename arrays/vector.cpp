#include <iostream>
#include <vector>
using namespace std;

/*
  Vectors has a dynamic size
*/

int main()
{
  vector<int> nums = {1, 2, 3};
  nums.push_back(4);
  nums.push_back(5);
  nums.push_back(6);

  for (int n: nums) {
    cout << n << " ";
  }

  nums[0] = 0;

  cout << nums[0] << endl; // 0

  /*
    We can get an iterator from the vector.
    The following method will return an iterator,
    which is actually a pointer:

    auto iterator = nums.begin();
  */
  for (auto i = nums.begin(); i != nums.end(); i++) {
    // *i = 0; We can to modifier a value
    cout << *i << endl;
  }

  /*
    In order to get a read-only pointer, we can add
    a "c" prefix to methods.
  */

  for (auto i = nums.cbegin(); i != nums.cend(); i++) {
    // *i = 0; error
    cout << *i << endl;
  }

  // Inverse iterator
  for (auto i = nums.rbegin(); i != nums.rend(); i++) {
    // *i = 0; error
    cout << *i << endl;
  }

  return 0;
}