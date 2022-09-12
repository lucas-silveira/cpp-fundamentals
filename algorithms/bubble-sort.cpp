/*
  Reference: https://www.programiz.com/dsa/bubble-sort
  Bubble sort is a sorting algorithm that compares two adjacent elements and swaps
  them until they are in the intended order.
  
  Just like the movement of air bubbles in the water that rise up to the surface,
  each element of the array move to the end in each iteration. Therefore, it is
  called a bubble sort.
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(n^2) and a space complexity O(1)
*/

void bubbleSort(vector<int> &array) {
  for (int i = 0; i < array.size()-1; i++) {
    bool swapped = false;
    for (int j = 0; j < (array.size()-i-1); j++) {
      if (array[j] > array[j+1]) {
        swap(array[j], array[j+1]);
        swapped = true;
      }
    }
    
    if (swapped == false) break;
  }
}

int main()
{
  vector<int> array = {8, 5, 2, 9, 5, 6, 3};
  bubbleSort(array);

  for (int i : array) {
    cout << i << " ";
  }

  return 0;
}