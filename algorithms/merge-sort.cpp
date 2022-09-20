/*
	Reference: https://www.programiz.com/dsa/merge-sort
	
	Merge Sort is one of the most popular sorting algorithms that is based on the
	principle of Divide and Conquer Algorithm. Here, a problem is divided into
	multiple sub-problems. Each sub-problem is solved individually. Finally,
	sub-problems are combined to form the final solution.
*/

#include <iostream>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(nlogn) and a space complexity O(1)
*/

// Merges two subarrays of array[]. First subarray is arr[begin..mid]. Second subarray is arr[mid+1..end].
void merge(vector<int> &array, int const left, int const mid,
		int const right)
{
	int const subArrayOne = mid - left + 1;
	int const subArrayTwo = right - mid;

	int leftArray[subArrayOne], rightArray[subArrayTwo];

	// Copy data to temp arrays leftArray[] and rightArray[]
	for (int i = 0; i < subArrayOne; i++)
		leftArray[i] = array[left + i];
	for (int j = 0; j < subArrayTwo; j++)
		rightArray[j] = array[mid + 1 + j];

	int indexOfSubArrayOne = 0,
			indexOfSubArrayTwo = 0,
			indexOfMergedArray = left;

	// Merge the temp arrays back into array[left..right]
	while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
		if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
			array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
			indexOfSubArrayOne++;
		} else {
			array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
			indexOfSubArrayTwo++;
		}
		indexOfMergedArray++;
	}
	// Copy the remaining elements of left[], if there are any
	while (indexOfSubArrayOne < subArrayOne) {
		array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
		indexOfSubArrayOne++;
		indexOfMergedArray++;
	}
	// Copy the remaining elements of right[], if there are any
	while (indexOfSubArrayTwo < subArrayTwo) {
		array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
		indexOfSubArrayTwo++;
		indexOfMergedArray++;
	}
}

void mergeSort(vector<int> &array, int const begin, int const end)
{
	if (begin >= end)
		return;

	int mid = begin + (end - begin) / 2;
	mergeSort(array, begin, mid);
	mergeSort(array, mid + 1, end);
	merge(array, begin, mid, end);
}

int main()
{
	vector<int> array = {12, 11, 13, 5, 6, 7};
	mergeSort(array, 0, array.size()-1);

	for (int i : array) {
		cout << i << " ";
	}

	return 0;
}
