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
    cout << i << " ";
  }

  return 0;
}