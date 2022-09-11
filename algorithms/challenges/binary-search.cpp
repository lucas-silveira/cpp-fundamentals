/*
  Binary Search


  Write a function that takes in a sorted array of integers as well as a target
  integer. The function should use the Binary Search algorithm to determine if
  the target integer is contained in the array and should return its index if it
  is, otherwise -1.

  If you're unfamiliar with Binary Search, we recommend watching the Conceptual
  Overview section of this question's video explanation before starting to code.

  Sample Input
  array = [0, 1, 21, 33, 45, 45, 61, 71, 72, 73]
  target = 33

  Sample Output
  3
*/

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(logn) and a space complexity O(1)
*/

int biSearchAlg(vector<int> &array, int target, int min, int max)
{
  if (min > max) return -1;
  
  int mid = floor((min+max)/2);
  if (array[mid] == target) return mid;
  if (array[mid] < target) return biSearchAlg(array, target, mid+1, max);
  else return biSearchAlg(array, target, min, mid-1);
}

int binarySearch(vector<int> array, int target)
{
  int min = 0;
  int max = array.size();

  return biSearchAlg(array, target, min, max);
}

int main()
{
  vector<int> array = {0, 1, 21, 33, 45, 45, 61, 71, 72, 73};
  int target = 33;

  cout << binarySearch(array, target) << endl;

  return 0;
}