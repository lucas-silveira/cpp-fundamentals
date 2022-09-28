#include <iostream>
using namespace std;

class Node {
  public:
    int key;
    Node* next;
};

class LinkedList {
  
  public:
    Node* head;
    int peek() {
      return head->key;
    }

    void print() {
      Node* i = head;
      while (i != nullptr) {
        cout << i->key << ", ";
        i = i->next;
      }
      cout << endl;
    }
};

int main()
{
  LinkedList* linkedList = new LinkedList();

  Node* one = new Node();
  Node* two = new Node();
  Node* three = new Node();
  one->key = 1;
  two->key = 2;
  three->key = 3;
  one->next = two;
  two->next = three;

  linkedList->head = one;

  cout << linkedList->peek() << endl;
  linkedList->print();

  return 0;
}