/*
  Spiral Traverse

  Write a function that takes in an n x m two-dimensional array (that can be
  square-shaped when n == m) and returns a one-dimensional array of all the
  array's elements in spiral order.

  Spiral order starts at the top left corner of the two-dimensional array, goes
  to the right, and proceeds in a spiral pattern all the way until every element
  has been visited.

  Sample Input
  array = [
    [1,   2,  3, 4],
    [12, 13, 14, 5],
    [11, 16, 15, 6],
    [10,  9,  8, 7],
  ]

  Sample Output
  [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(n) and a space complexity O(n)
*/

vector<int> spiralTraverse(vector<vector<int>> array) {
  vector<int> list;
  int lineIdx, colIdx, edgeLine, edgeCol, flag;
  int total = array.size() * array[0].size();
  
  lineIdx = colIdx = edgeLine = edgeCol = flag = 0;
  list.push_back(array[lineIdx][colIdx]);

  while (list.size() < total) {
    if (flag == 0) {
      if (colIdx < array[lineIdx].size()-edgeCol-1) colIdx++;
      else if (lineIdx < array.size()-edgeLine-1) lineIdx++;
      else {
        flag = 1;
        edgeLine++;
        continue;
      }
    } else {
      if (colIdx > edgeCol) colIdx--;
      else if (lineIdx > edgeLine) lineIdx--;
      else {
        flag = 0;
        edgeCol++;
        continue;
      }
    }
    list.push_back(array[lineIdx][colIdx]);
  }
    
  return list;
}

int main()
{
  vector<vector<int>> array = {
    {1,   2,  3, 4},
    {12, 13, 14, 5},
    {11, 16, 15, 6},
    {10,  9,  8, 7},
  };
  vector<int> res = spiralTraverse(array);

  for (int i : res) {
    cout << i << ", ";
  }

  return 0;
}