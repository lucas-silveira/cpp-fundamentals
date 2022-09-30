/*
  Array of Products

  Write a function that takes in a non-empty array of integers and returns an
  array of the same length, where each element in the output array is equal to
  the product of every other number in the input array.

  In other words, the value at output[i] is equal to the product of
  every number in the input array other than input[i].

  Note that you're expected to solve this problem without using division.

  Sample Input
  array = [5, 1, 4, 2]

  Sample Output
  [8, 40, 10, 20]
  // 8 is equal to 1 x 4 x 2
  // 40 is equal to 5 x 4 x 2
  // 10 is equal to 5 x 1 x 2
  // 20 is equal to 5 x 1 x 4
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(n) and a space complexity O(n)
*/

vector<int> arrayOfProducts(vector<int> array) {
  vector<int> products(array.size(), 1);

  int leftSide = 1;
  for (int i = 0; i < array.size(); i++) {
    products[i] = leftSide;
    leftSide *= array[i];
  }

  int rightSide = 1;
  for (int i = array.size()-1; i >= 0; i--) {
    products[i] *= rightSide;
    rightSide *= array[i];
  }
    
  return products;
}


int main()
{
  vector<int> array = {5, 1, 4, 2};
  vector<int> res = arrayOfProducts(array);

  for (int i : res) {
    cout << i << ", ";
  }

  return 0;
}