#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> nums;
  // assign(size, value_to_fill)
  nums.assign(10, 1);

  for (auto n: nums) {
    cout << n << " ";
  }

  cout << endl;
  cout << nums.size() << endl; // 10

  nums[0] = 9;
  nums[3] = 8;
  nums[5] = 8;
  nums[9] = 9;
  nums.erase(nums.begin()); // delete an element by index

  for (auto n: nums) {
    cout << n << " ";
  }
  
  cout << endl;
  cout << nums.size() << endl; // 9

  nums.clear(); // delete all elements
  cout << nums.size() << endl; // 0

  return 0;
}