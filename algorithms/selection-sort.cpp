/*
  Reference: https://www.programiz.com/dsa/selection-sort

  Selection sort is a sorting algorithm that selects the smallest element from
  an unsorted list in each iteration and places that element at the beginning
  of the unsorted list.
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(n^2) and a space complexity O(1)
*/

void selectionSort(vector<int> &array) {
  int min_idx;

  for (int i = 0; i < array.size(); i++) {
    min_idx = i;
    for (int j = i; j < array.size(); j++) {
      if (array[min_idx] > array[j]) {
        min_idx = j;
      }
    }
    swap(array[i], array[min_idx]);
  }
}


int main()
{
  vector<int> array = {8, 5, 2, 9, 5, 6, 3};
  selectionSort(array);

  for (int i : array) {
    cout << i << " ";
  }

  return 0;
}