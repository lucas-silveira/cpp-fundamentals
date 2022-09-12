/*
  Validate Subsequence

  Given two non-empty arrays of integers, write a function that determines
  whether the second array is a subsequence of the first one.

  A subsequence of an array is a set of numbers that aren't necessarily adjacent
  in the array but that are in the same order as they appear in the array. For
  instance, the numbers [1, 3, 4] form a subsequence of the array [1, 2, 3, 4],
  and so do the numbers [2, 4]. Note that a single number in an array and the
  array itself are both valid subsequences of the array.

  Sample Input
  array = [5, 1, 22, 25, 6, -1, 8, 10]
  sequence = [1, 6, -1, 10]

  Sample Output
  true
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(n) and a space complexity O(1)
*/

bool isValidSubsequence(vector<int> arr, vector<int> seq) {
  int step = 0;
  for (int i = 0; i < arr.size(); i++) {
     if (arr[i] == seq[step]) step++;
  }

  return step == seq.size();
}


int main()
{
  vector<int> arr = {5, 1, 22, 25, 6, -1, 8, 10};
  vector<int> seq = {1, 6, -1, 10};

  cout << isValidSubsequence(arr, seq) << endl;

  return 0;
}