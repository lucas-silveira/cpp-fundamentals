/*
  Move Element To End

  You're given an array of integers and an integer. Write a function that moves
  all instances of that integer in the array to the end of the array and returns
  the array.

  The function should perform this in place (i.e., it should mutate the input
  array) and doesn't need to maintain the order of the other integers.

  Sample Input
  array = [2, 1, 2, 2, 2, 3, 4, 2]
  toMove = 2

  Sample Output
  [1, 3, 4, 2, 2, 2, 2, 2] 
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(n) and a space complexity O(1)
*/

vector<int> moveElementToEnd(vector<int> array, int toMove) {
  int idxToMove = 0;

  for (int i = 0; i < array.size(); i++) {
    if (array[i] == toMove) continue;
    
    if (i != idxToMove) swap(array[i], array[idxToMove]);
    idxToMove++;
  }
  
  return array;
}

int main()
{
  vector<int> array = {2, 1, 2, 2, 2, 3, 4, 2};
  int toMove = 2;

  vector<int> res = moveElementToEnd(array, toMove);

  for (int i : res) {
    cout << i << ", ";
  }

  return 0;
}