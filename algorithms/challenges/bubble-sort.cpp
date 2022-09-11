/*
  Bubble Sort

  Write a function that takes in an array of integers and returns a sorted
  version of that array. Use the Bubble Sort algorithm to sort the array.

  If you're unfamiliar with Bubble Sort, we recommend watching the Conceptual
  Overview section of this question's video explanation before starting to code.

  Sample Input
  array = [8, 5, 2, 9, 5, 6, 3]

  Sample Output
  [2, 3, 5, 5, 6, 8, 9]
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(n^2) and a space complexity O(1)
*/

vector<int> bubbleSort(vector<int> array) {
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
  
  return array;
}

int main()
{
  vector<int> array = {8, 5, 2, 9, 5, 6, 3};
  vector<int> res = bubbleSort(array);

  for (int i : res) {
    cout << i << ", ";
  }

  cout << endl;

  return 0;
}