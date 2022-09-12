/*
  Palindrome Check

  Write a function that takes in a non-empty string and that returns a boolean
  representing whether the string is a palindrome.

  A palindrome is defined as a string that's written the same forward and
  backward. Note that single-character strings are palindromes.

  Sample Input
  string = "abcdcba"

  Sample Output
  true
*/

#include <iostream>
using namespace std;

/*
  This solution has a time complexity O(n) and a space complexity O(1)
*/

bool isPalindrome(string str) {
  for (int i = 0; i < str.size()/2; i++) {
    if (str[i] != str[str.size()-i-1]) return false;
  }
  return true;
}


int main()
{
  string str = "abcdcba";

  cout << isPalindrome(str) << endl;
  
  return 0;
}