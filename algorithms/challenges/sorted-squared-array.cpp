/*
  Sorted Squared Array

  Write a function that takes in a non-empty array of integers that are sorted
  in ascending order and returns a new array of the same length with the squares
  of the original integers also sorted in ascending order.

  Sample Input
  array = [1, 2, 3, 5, 6, 8, 9]

  Sample Output
  [1, 4, 9, 25, 36, 64, 81]
*/

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

/*
  This solution has a time complexity O(n2) and a space complexity O(n)
*/

void insertionSort(vector<int> &arr)
{
  int i, j, key;

  for (i = 0; i<arr.size(); i++) {
    key = arr[i];
    j = i-1;

    while (j >= 0 && arr[j]>key) {
      arr[j+1] = arr[j];
      --j;
    }

    arr[j+1] = key;
  }
}

vector<int> sortedSquaredArray(vector<int> arr)
{
  vector<int> sqArr;
  
  for (int i = 0; i<arr.size(); i++) {
    sqArr.push_back(pow(arr[i], 2));
  }
  insertionSort(sqArr);
  
  return sqArr;
}

int main()
{
  vector<int> arr = {1, 2, 3, 5, 6, 8, 9};

  vector<int> res = sortedSquaredArray(arr);

  for (int i : res) {
    cout << i << " ";
  }

  return 0;
}