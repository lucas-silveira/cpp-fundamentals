/*
  Reference: https://www.programiz.com/dsa/insertion-sort
  
  Insertion sort works similarly as we sort cards in our hand in a card game.
  
  We assume that the first card is already sorted then, we select an unsorted
  card. If the unsorted card is greater than the card in hand, it is placed on
  the right otherwise, to the left. In the same way, other unsorted cards are
  taken and put in their right place.
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(n^2) and a space complexity O(1)
*/

void insertionSort(vector<int> &array)
{
  int key, j;
  for (int i = 0; i < array.size(); i++) {
    key = array[i];
    j = i-1;

    while (j >= 0 && array[j] > key) {
      array[j+1] = array[j];
      j--;
    }

    array[j+1] = key;
  }
}

int main()
{
  vector<int> array = {5, 2, 4, 6, 1, 3};
  insertionSort(array);

  for (int i : array) {
    cout << i << " ";
  }

  return 0;
}