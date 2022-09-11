#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(n^2) and a space complexity O(1)
*/

void insertionSort(vector<int> &array)
{
  int key, j;
  for (int i = 0; i < array.size(); i++) {
    key = array[i];
    j = i-1;

    while (j >= 0 && array[j] > key) {
      array[j+1] = array[j];
      j--;
    }

    array[j+1] = key;
  }
}

int main()
{
  vector<int> array = {5, 2, 4, 6, 1, 3};
  
  insertionSort(array);

  for (int i : array) {
    cout << i << " ";
  }

  return 0;
}