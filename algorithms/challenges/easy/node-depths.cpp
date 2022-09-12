/*
  Node Depths

  The distance between a node in a Binary Tree and the tree's root is called the
  node's depth.

  Write a function that takes in a Binary Tree and returns the sum of its nodes
  depths.

  Each BinaryTree node has an integer value, a left child node, and a right child
  node. Children nodes can either be BinaryTree nodes themselves or None/null.

  Sample Input
  tree =     1
          /     \
        2       3
      /   \   /   \
     4     5 6     7
   /   \
  8     9

  Sample Output
  20
  // The depth of the node with value 2 is 1.
  // The depth of the node with value 3 is 1.
  // The depth of the node with value 4 is 2.
  // The depth of the node with value 5 is 2.
  // ...
  // Summing all of these depths yields 16.
*/

#include <iostream>
using namespace std;

/*
  This solution has a time complexity O(nlogn) and a space complexity O(n)
*/

class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }
};

void sumDepths(BinaryTree *node, int &sum, int depth = 0) {
  sum += depth;
  if (node->left != nullptr) sumDepths(node->left, sum, depth+1);
  if (node->right != nullptr) sumDepths(node->right, sum, depth+1);
}

int nodeDepths(BinaryTree *root) {
  int sum = 0;

  sumDepths(root, sum);
  
  return sum;
}


int main()
{
  return 0;
}