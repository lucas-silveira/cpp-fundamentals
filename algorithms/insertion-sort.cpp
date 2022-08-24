#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
  int i, key, j;
  for (i = 0; i<n; i++)
  {
    key = arr[i];
    j = i-1;

    /*
      Move elements of arr[0..i-1],  
      that are greater than key, to one 
      position ahead of their 
      current position
    */
    while (j>=0 && arr[j]>key)
    {
      arr[j+1] = arr[j];
      j--;
    }

    arr[j+1] = key;
  }
}

void printArray(int arr[], int n) 
{
  int i;
  string result;
  for (i = 0; i<n; i++)
  {
    result.append(to_string(arr[i])).append(", ");
  }
  cout << result << endl;
} 

int main()
{
  int arr[] = {5, 2, 4, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int); // the array size in bytes divideded for the type size
  
  insertionSort(arr, n);
  printArray(arr, n);

  return 0;
}