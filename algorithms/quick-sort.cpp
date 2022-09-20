/*
  Reference: https://www.programiz.com/dsa/quick-sort

  Quicksort is a sorting algorithm based on the divide and conquer approach where

  1.  An array is divided into subarrays by selecting a pivot element (element selected from the array).
      While dividing the array, the pivot element should be positioned in such a way that elements less than pivot are kept on the left side and elements greater than pivot are on the right side of the pivot.
  2.  The left and right subarrays are also divided using the same approach. This process continues until each subarray contains a single element.
  3.  At this point, elements are already sorted. Finally, elements are combined to form a sorted array.
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(n^2) and a space complexity O(logn)
*/

int partition(vector<int>&, int, int);

void quickSort(vector<int> &arr, int firstIdx, int lastIdx) {
  if (firstIdx >= lastIdx) return;

  int pivotIdx = partition(arr, firstIdx, lastIdx);

  quickSort(arr, firstIdx, pivotIdx-1);
  quickSort(arr, pivotIdx, lastIdx);
}

int partition(vector<int> &arr, int firstIdx, int lastIdx) {
  int pivot = arr[lastIdx];
  int i = firstIdx-1;

  for (int j = firstIdx; j < lastIdx; j++) {
    if (arr[j] > pivot) continue;
    i++;
    swap(arr[i], arr[j]);
  }

  swap(arr[i+1], arr[lastIdx]);

  return i+1;
}

int main()
{
  vector<int> arr = {8, 7, 6, 1, 0, 9, 2};
  quickSort(arr, 0, arr.size()-1);

  for (int i : arr) {
    cout << i << ", ";
  }

  return 0;
}