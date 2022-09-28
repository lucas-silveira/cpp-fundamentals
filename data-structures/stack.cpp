#include <iostream>
using namespace std;


class Stack {
  int static const STACK_SIZE = 10;

  int data[STACK_SIZE] = {};
  int top = -1;

  public:
    void push(int value) {
      if (isFull()) return;
      top++;
      data[top] = value;
    }

    int pop() {
      if (isEmpty()) return 0;
      int value = data[top];
      top--;
      return value;
    }

    int peek() {
      return data[top];
    }

    void print() {
      for (int i : data) cout << i << ", ";
      cout << endl;
    }

  private:
    bool isFull() {
      return top == STACK_SIZE-1;
    }

    bool isEmpty() {
      return top == -1;
    }
};

int main()
{
  Stack stack;
  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(4);

  
  cout << stack.peek() << endl;
  
  cout << stack.pop() << endl;
  cout << stack.pop() << endl;
  cout << stack.pop() << endl;
  cout << stack.pop() << endl;

  stack.push(3);

  cout << stack.pop() << endl;

  return 0;
}