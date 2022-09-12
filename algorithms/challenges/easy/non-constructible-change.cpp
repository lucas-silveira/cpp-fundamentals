/*
  Non-Constructible Change

  Given an array of positive integers representing the values of coins in your
  possession, write a function that returns the minimum amount of change (the
  minimum sum of money) that you cannot create. The given coins can have
  any positive integer value and aren't necessarily unique (i.e., you can have
  multiple coins of the same value).

  For example, if you're given coins = [1, 2, 5], the minimum amount of change
  that you can't create is 4. If you're given no coins, the minimum amount of
  change that you can't create is 1.

  Sample Input
  coins = [5, 7, 1, 1, 2, 3, 22]

  Sample Output
  20
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(nlogn) and a space complexity O(1)
*/

int nonConstructibleChange(vector<int> coins) {
  int minSum = 1;

  sort(coins.begin(), coins.end());

  for (int i = 0; i<coins.size(); i++) {
    if (coins[i] > minSum) return minSum;
    minSum += coins[i];
  }

  return minSum;
}

int main()
{
  vector<int> coins = {5, 7, 1, 1, 2, 3, 22};

  cout << nonConstructibleChange(coins) << endl;

  return 0;
}