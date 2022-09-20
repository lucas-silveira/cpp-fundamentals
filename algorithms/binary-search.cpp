/*
  Reference: https://www.programiz.com/dsa/binary-search
  
  Binary Search is a searching algorithm for finding an element's position in a
  sorted array.
  
  In this approach, the element is always searched in the middle of a portion
  of an array.
  
  Binary Search Algorithm can be implemented in two ways which are discussed below.
  - Iterative Method
  - Recursive Method

  The recursive method follows the Divide and Conquer approach.
*/

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(logn) and a space complexity O(1)
*/

int biSearchSup(vector<int> &array, int const target, int const min, int const max)
{
  if (min > max) return -1;
  
  int mid = floor((min+max)/2);
  if (array[mid] == target) return mid;
  if (array[mid] < target) return biSearchSup(array, target, mid+1, max);
  else return biSearchSup(array, target, min, mid-1);
}

int binarySearch(vector<int> array, int const target)
{
  int min = 0;
  int max = array.size();

  return biSearchSup(array, target, min, max);
}

int main()
{
  vector<int> array = {0, 1, 21, 33, 45, 45, 61, 71, 72, 73};
  int target = 33;

  cout << binarySearch(array, target) << endl;

  return 0;
}