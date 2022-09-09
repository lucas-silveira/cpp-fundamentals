/*
  Branch Sums

  Write a function that takes in a Binary Tree and returns a list of its branch
  sums ordered from leftmost branch sum to rightmost branch sum.

  A branch sum is the sum of all values in a Binary Tree branch. A Binary Tree
  branch is a path of nodes in a tree that starts at the root node and ends at
  any leaf node.

  Each BinaryTree node has an integer value, a left child node, and a right child
  node. Children nodes can either be BinaryTree nodes themselves or None/null.

  Sample Input
  tree =       1
            /     \
          2       3
        /   \    /  \
      4      5  6    7
    /   \   /
  8     9 10

  Sample Output
  [15, 16, 18, 10, 11]
  // 15 == 1 + 2 + 4 + 8
  // 16 == 1 + 2 + 4 + 9
  // 18 == 1 + 2 + 5 + 10
  // 10 == 1 + 3 + 6
  // 11 == 1 + 3 + 7
*/

#include <iostream>
#include <vector>
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

void sum(BinaryTree *root, vector<int> &sumArr, int acc) {
  if (root == nullptr) return;
  
  acc += root->value;
  if (root->left == nullptr && root->right == nullptr) {
    sumArr.push_back(acc);
    return;
  }

  sum(root->left, sumArr, acc);
  sum(root->right, sumArr, acc);
}

vector<int> branchSums(BinaryTree *root) {
  vector<int> sumArr;
  int acc = 0;

  sum(root, sumArr, acc);
  
  return sumArr;
}


int main()
{
  return 0;
}