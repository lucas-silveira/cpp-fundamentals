/*
  Find Closest Value In BST

  Write a function that takes in a Binary Search Tree (BST) and a target integer
  value and returns the closest value to that target value contained in the BST.

  You can assume that there will only be one closest value.

  Each BST node has an integer value, a left child node, and a right child
  node. A node is said to be a valid BST node if and only if it satisfies
  the BST property: its value is strictly greater than the values of every
  node to its left; its value is less than or equal to the values of every
  node to its right; and its children nodes are either valid BST nodes
  themselves or None/null.

  Sample Input
  tree =      10
           /     \
          5       15
        /   \   /   \
      2     5 13     22
    /           \
  1              14
  target = 12

  Sample Output
  13
*/

#include <iostream>
using namespace std;

/*
  This solution has a time complexity O(nlogn) and a space complexity O(1)
*/

class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

int takeClosestValue(int a, int b, int target) {
  int diffA = abs(target - a);
  int diffB = abs(target - b);

  return diffA > diffB ? b : a;
}

int findClosestValueInBst(BST *tree, int target) {
  if (tree == NULL) return 0;

  int leftValue = findClosestValueInBst(tree->left, target);
  int rightValue = findClosestValueInBst(tree->right, target);

  if (leftValue == 0) {
    if (rightValue == 0) return tree->value;
    return takeClosestValue(rightValue, tree->value, target);
  }
  if (rightValue == 0) return takeClosestValue(leftValue, tree->value, target);

  int closestChildValue = takeClosestValue(leftValue, rightValue, target);
  return takeClosestValue(tree->value, closestChildValue, target);
}

int main()
{
  return 0;
}