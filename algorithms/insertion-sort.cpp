#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
  for (int i = 0; i<n; i++) {
    int value = arr[i];
    int j = i-1;

    while (j>=0 && arr[j]>value) {
      arr[j+1] = arr[j];
      j--;
    }

    arr[j+1] = value;
  }
}

int main()
{
  int arr[] = {5, 2, 4, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int); // the array size in bytes divideded for the type size
  
  insertionSort(arr, n);

  string result = "";
  for (int i : arr) {
    result.append(to_string(i)).append(", ");
  }

  cout << result << endl;

  return 0;
}