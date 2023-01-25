/*
  Group equal chars

  Write a function that takes in an array of strings and returns the similar
  strings grouped.

  Sample Input
  array = ["142", "421", "9ab", "241", "ba9", "4211"]

  Sample Output
  "142", "421", "241"
  "9ab", "ba9"
  "4211"
*/

#include <iostream>
#include <map>
#include <vector>
using namespace std;

/*
  This solution has a time complexity O(nlgn) and a space complexity O(n)
*/

vector<vector<string>> groupStrings(vector<string> arr) {
  map<string, vector<string>> groupedTable;
  vector<vector<string>> groupedList;

  for (int i = 0; i < arr.size(); i++) {
    string copy = arr[i];
    sort(copy.begin(), copy.end());

    groupedTable[copy].push_back(arr[i]);
  }

  for (pair<string, vector<string>> entry : groupedTable) {
    groupedList.push_back(entry.second);
  }

  return groupedList;
}

int main()
{
  vector<string> strings = {"142", "421", "9ab", "241", "ba9", "4211"};
  vector<vector<string>> groupedStrings = groupStrings(strings);

  for (vector<string> list : groupedStrings) {
    for (string str : list) {
      cout << str << ", ";
    }
    cout << endl;
  }

  return 0;
}