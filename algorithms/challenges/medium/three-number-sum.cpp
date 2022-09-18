/*
  Three Number Sum

  Write a function that takes in a non-empty array of distinct integers and an
  integer representing a target sum. The function should find all triplets in
  the array that sum up to the target sum and return a two-dimensional array of
  all these triplets. The numbers in each triplet should be ordered in ascending
  order, and the triplets themselves should be ordered in ascending order with
  respect to the numbers they hold.

  If no three numbers sum up to the target sum, the function should return an
  empty array.

  Sample Input
  array = [12, 3, 1, 2, -6, 5, -8, 6]
  targetSum = 0

  Sample Output
  [[-8, 2, 6], [-8, 3, 5], [-6, 1, 5]]
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(n^2) and a space complexity O(n)
*/

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
  sort(array.begin(), array.end());
  vector<vector<int>> triplets;

  for (int i = 0; i< array.size()-2; i++) {
    int left = i+1;
    int right = array.size()-1;

    while (left < right) {
      int currSum = array[i] + array[left] + array[right];
      if (currSum < targetSum) left++;
      else if (currSum > targetSum) right--;
      else {
        triplets.push_back({array[i], array[left], array[right]});
        left++;
        right--;
      }
    }
  }
  
  return triplets;
}

int main()
{
  vector<int> array = {12, 3, 1, 2, -6, 5, -8, 6};
  int targetSum = 0;

  vector<vector<int>> res = threeNumberSum(array, targetSum);

  cout << "[";
  for (vector<int> &i : res) {
    cout << "[";
    for (int &j : i) {
      cout << j << ", ";
    }
    cout << "],";
  }
  cout << "]";

  return 0;
}