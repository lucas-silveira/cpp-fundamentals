/*
  Caesar Cipher Encryptor

  Given a non-empty string of lowercase letters and a non-negative integer
  representing a key, write a function that returns a new string obtained by
  shifting every letter in the input string by k positions in the alphabet,
  where k is the key.

  Note that letters should "wrap" around the alphabet; in other words, the
  letter z shifted by one returns the letter a.

  Sample Input
  string = "xyz"

  Sample Output
  "zab"
*/

#include <iostream>
using namespace std;

/*
  This solution has a time complexity O(n) and a space complexity O(n)
*/

string caesarCypherEncryptor(string str, int key) {
  int asciiLength =  'z'-'a'; // difference between 'z' Ascii Code (122) and 'a' Ascii Code (97)
  string newStr = "";

  for (char letter : str) {
    int newAsciiCode = (letter+key-'a')%(asciiLength+1)+'a';
    newStr += char(newAsciiCode);
  }

  return newStr;
}


int main()
{
  string str = "xyz";
  int key = 2;

  cout << caesarCypherEncryptor(str, key) << endl;

  return 0;
}