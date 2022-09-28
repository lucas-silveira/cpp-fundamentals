#include <iostream>
using namespace std;

class Queue {
  int static const QUEUE_SIZE = 10;

  int data[QUEUE_SIZE] = {};
  int head = -1;
  int tail = -1;

  public:
    void enqueue(int value) {
      if (isFull()) return;
      if (head == -1) head = 0;
      tail++;
      data[tail] = value;
    }

    int dequeue() {
      if (isEmpty()) return 0;
      int value = data[head];

      if (head >= tail) head = tail = -1;
      else head++;
      
      return value;
    }

    int peek() {
      return data[head];
    }

    void print() {
      for (int i : data) cout << i << ", ";
      cout << endl;
    }

    bool isFull() {
      return head == 0 && tail == QUEUE_SIZE-1;
    }

    bool isEmpty() {
      return head == -1;
    }
};

int main()
{
  Queue queue;

  queue.enqueue(1);
  queue.enqueue(2);
  queue.enqueue(3);
  queue.enqueue(4);

  queue.print();

  cout << queue.peek() << endl;

  cout << queue.dequeue() << endl;
  cout << queue.dequeue() << endl;
  cout << queue.dequeue() << endl;
  cout << queue.dequeue() << endl;

  queue.enqueue(3);

  cout << queue.dequeue() << endl;

  return 0;
}