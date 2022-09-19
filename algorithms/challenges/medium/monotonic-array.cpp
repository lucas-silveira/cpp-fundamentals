/*
  Monotonic Array

  Write a function that takes in an array of integers and returns a boolean
  representing whether the array is monotonic.

  An array is said to be monotonic if its elements, from left to right, are
  entirely non-increasing or entirely non-decreasing.

  Non-increasing elements aren't necessarily exclusively decreasing; they simply
  don't increase. Similarly, non-decreasing elements aren't necessarily
  exclusively increasing; they simply don't decrease.

  Note that empty arrays and arrays of one element are monotonic.

  Sample Input
  array = [-1, -5, -10, -1100, -1100, -1101, -1102, -9001]

  Sample Output
  true
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(n) and a space complexity O(1)
*/

bool isMonotonic(vector<int> array) {  
  if(array.size() <= 2) return true;
  
  bool isIncreasing = array.front() < array.back();
  
  for (int i = 0; i < array.size()-1; i++) {
    if (array[i] < array[i+1] && !isIncreasing) return false;
    if (array[i] > array[i+1] && isIncreasing) return false;
  }
  
  return true;
}

int main()
{
  vector<int> array = {-1, -5, -10, -1100, -1100, -1101, -1102, -9001};

  cout << isMonotonic(array) << endl;

  return 0;
}