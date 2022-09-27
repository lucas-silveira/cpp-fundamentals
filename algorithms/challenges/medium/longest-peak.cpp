/*
  Longest Peak


  Write a function that takes in an array of integers and returns the length of
  the longest peak in the array.

  A peak is defined as adjacent integers in the array that are strictly
  increasing until they reach a tip (the highest value in the peak), at which
  point they become strictly decreasing. At least three integers are required to
  form a peak.

  For example, the integers 1, 4, 10, 2 form a peak, but the integers 4, 0, 10
  don't and neither do the integers 1, 2, 2, 0. Similarly, the integers 1, 2, 3
  don't form a peak because there aren't any strictly decreasing integers after
  the 3.
  
  Sample Input
  array = [1, 2, 3, 3, 4, 0, 10, 6, 5, -1, -3, 2, 3]

  Sample Output
  6 // 0, 10, 6, 5, -1, -3
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(n^2) and a space complexity O(1)
*/

auto isEqualOrLess = [](int a, int b) -> bool { return a <= b; };

auto isPeak = [](vector<int> array, int i) ->
  bool { return array[i] > array[i-1] && array[i] > array[i+1]; };

int longestPeak(vector<int> array) {
  int longestPeak = 0;
  
  if (array.size() == 0) return longestPeak;
  
  for (int i = 1; i < array.size()-1; i++) {
    int peak = 0;
    if (isPeak(array, i)) {
      peak = i;
    }
    if (!peak) continue;
    
    int down = i-1, up = i+1;
    while (down > 0) {
      if (
        isPeak(array, down-1) ||
        isEqualOrLess(array[down], array[down-1])
      ) break;
      down--;
    }
    while (up < array.size()-1) {
      if (
        isPeak(array, up) ||
        isEqualOrLess(array[up], array[up+1])
      ) break;
      up++;
    }
    
    longestPeak = max(longestPeak, (i-down)+(up-i)+1);
    peak = 0;
  }
  
  return longestPeak;
}


int main()
{
  vector<int> array = {1, 2, 3, 3, 4, 0, 10, 6, 5, -1, -3, 2, 3};
  cout << longestPeak(array);

  return 0;
}