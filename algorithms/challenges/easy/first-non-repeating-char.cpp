/*
  First Non-Repeating Character

  Write a function that takes in a string of lowercase English-alphabet letters
  and returns the index of the string's first non-repeating character.

  The first non-repeating character is the first character in a string that
  occurs only once.

  If the input string doesn't have any non-repeating characters, your function
  should return -1.

  Sample Input
  string = "abcdcaf"

  Sample Output
  1
*/

#include <iostream>
#include <unordered_map>
using namespace std;

/*
  This solution has a time complexity O(n) and a space complexity O(1)
  The constant space is because the input string only has lowercase
  English-alphabet letters. Thus, our hash table will never have more
  than 26 character frequencies.
*/

int firstNonRepeatingCharacter(string string) {
  unordered_map<char, int> charTable;
  
  for (char ch : string) {
    charTable[ch]++;
  }

  for (int i = 0; i < string.size(); i++) {
    if (charTable[string[i]] == 1) return i;
  }
  
  return -1;
}

int main()
{
  string str = "abcdcaf";
  cout << firstNonRepeatingCharacter(str) << endl;

  return 0;
}