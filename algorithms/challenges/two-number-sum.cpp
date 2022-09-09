/*
  Two Number Sum

  Write a function that takes in a non-empty array of distinct integers and an
  integer representing a target sum. If any two numbers in the input array sum
  up to the target sum, the function should return them in an array, in any
  order. If no two numbers sum up to the target sum, the function should return
  an empty array.

  Note that the target sum has to be obtained by summing two different integers
  in the array; you can't add a single integer to itself in order to obtain the
  target sum.

  You can assume that there will be at most one pair of numbers summing up to
  the target sum.

  Sample Input
  array = [3, 5, -4, 8, 11, 1, -1, 6]
  target = 10

  Sample Output
  [-1, 11] // the numbers could be in reverse order
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
  This solution has a time complexity O(n) and a space complexity O(n)
*/

vector<int> twoNumberSum(vector<int> arr, int tSum) {
  unordered_set<int> sup;

  for (int i = 0; i<arr.size(); i++) {
    int y = tSum - arr[i];
    
    if (sup.find(y) != sup.end()) {
      return {arr[i], y};
    }

    sup.insert(arr[i]);
  }
  
  return {};
}

int main()
{
  vector<int> arr = {3, 5, -4, 8, 11, 1, -1, 6};
  int target = 10;

  vector<int> res = twoNumberSum(arr, target);

  for (int i : res) {
    cout << i << ", ";
  }

  cout << endl;

  return 0;
}