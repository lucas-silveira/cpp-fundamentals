/*
  Find Three Largest Numbers

  Write a function that takes in an array of at least three integers and and
  returns a sorted array of the three largest integers in the input array.

  The function should return duplicate integers if necessary; for example, it
  should return [10, 10, 12] for an input array of [10, 5, 9, 10, 12].

  Sample Input
  array = [141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7]

  Sample Output
  [18, 141, 541]
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(nlgn) and a space complexity O(1)
*/

vector<int> findThreeLargestNumbers(vector<int> array) {
  vector<int> largestNumbers;
  sort(array.begin(), array.end());

  for (int i = 3; i > 0; i--) {
    largestNumbers.push_back(array[array.size()-i]);
  }
  
  return largestNumbers;
}

int main()
{
  vector<int> array = {141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7};
  vector<int> res = findThreeLargestNumbers(array);

  for (int i : res) {
    cout << i << " ";
  }

  return 0;
}