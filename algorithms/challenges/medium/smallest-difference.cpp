/*
  Smallest Difference

  Write a function that takes in two non-empty arrays of integers, finds the
  pair of numbers (one from each array) whose absolute difference is closest to
  zero, and returns an array containing these two numbers, with the number from
  the first array in the first position.

  Note that the absolute difference of two integers is the distance between
  them on the real number line. For example, the absolute difference of -5 and 5
  is 10, and the absolute difference of -5 and -4 is 1.

  You can assume that there will only be one pair of numbers with the smallest
  difference.

  Sample Input
  arrayOne = [-1, 5, 10, 20, 28, 3]
  arrayTwo = [26, 134, 135, 15, 17]

  Sample Output
  [28, 26]
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(nlgn + mlgm) and a space complexity O(1),
  where n is the length of the first input array and m is the length of the second
  input array.
*/

vector<int> smallestDifference(vector<int> arrOne, vector<int> arrTwo) {
  sort(arrOne.begin(), arrOne.end());
  sort(arrTwo.begin(), arrTwo.end());

  int oneIdx = 0, twoIdx = 0, smallest = INT_MAX;
  int smallPair[2];

  while (oneIdx < arrOne.size() && twoIdx < arrTwo.size()) {
    int diff = abs(arrOne[oneIdx] - arrTwo[twoIdx]);
    if (diff <= smallest) {
      smallest = diff;
      smallPair[0] = arrOne[oneIdx];
      smallPair[1] = arrTwo[twoIdx];
      if (diff == 0) break;
    }

    if (arrOne[oneIdx] < arrTwo[twoIdx]) oneIdx++;
    else twoIdx++;
  }
    
  return {smallPair[0], smallPair[1]};
}

int main()
{
  vector<int> arrOne = {-1, 5, 10, 20, 28, 3};
  vector<int> arrTwo = {26, 134, 135, 15, 17};

  vector<int> res = smallestDifference(arrOne, arrTwo);

  for (int i : res) {
    cout << i << ", ";
  }

  return 0;
}