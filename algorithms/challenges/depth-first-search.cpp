/* 
  Depth-first Search

  You're given a Node class that has a name and an array of optional children nodes.
  When put together, nodes form an acyclic tree-like structure.

  Implement the depthFirstSearch method on the Node class, which takes in an empty
  array, traverses the tree using the Depth-first Search approach (specifically
  navigating the tree from left to right), stores all of the nodes' names in the
  input array, and returns it.

  If you're unfamiliar with Depth-first Search, we recommend watching the
  Conceptual Overview section of this question's video explanation before
  starting to code.

  Sample Input
  graph =   A
        /  |  \
      B   C    D
    / \     / \
  E   F   G    H
      / \   \
    I   J    K

  Sample Output
  ["A", "B", "E", "F", "I", "J", "C", "D", "G", "K", "H"]
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(n) and a space complexity O(n)
*/

class Node {
public:
  string name;
  vector<Node *> children;

  Node(string str) { name = str; }

  vector<string> depthFirstSearch(vector<string> *array) {
    array->push_back(name);

    for (auto &node : children) {
      node->depthFirstSearch(array);
    }

    return *array;
  }

  Node *addChild(string name) {
    Node *child = new Node(name);
    children.push_back(child);
    return this;
  }
};


int main()
{
  return 0;
}