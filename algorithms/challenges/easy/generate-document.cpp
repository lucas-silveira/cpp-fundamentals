/*
  Generate Document

  You're given a string of available characters and a string representing a
  document that you need to generate. Write a function that determines if you
  can generate the document using the available characters. If you can generate
  the document, your function should return "true"; otherwise, it should return
  "false".

  You're only able to generate the document if the frequency of unique
  characters in the characters string is greater than or equal to the frequency
  of unique characters in the document string. For example, if you're given
  characters = "abcabc" and document = "aabbccc" you cannot generate the document
  because you're missing one "c".

  The document that you need to create may contain any characters, including
  special characters, capital letters, numbers, and spaces.

  Note: you can always generate the empty string ("").

  Sample Input
  characters = "Bste!hetsi ogEAxpelrt x "
  document = "AlgoExpert is the Best!"

  Sample Output
  true
*/

#include <iostream>
#include <unordered_map>
using namespace std;

/*
  This solution has a time complexity O(n+m) and a space complexity O(n)
*/

bool generateDocument(string characters, string document) {
  if (document == "") return true;
  unordered_map<char, int> charTable;

  for (char ch : characters) {
    charTable[ch] += 1;
  }

  for (char ch : document) {
    if (charTable[ch] <=0 ) return false;
    charTable[ch]--;
  }
  
  return true;
}


int main()
{
  string characters = "Bste!hetsi ogEAxpelrt x ";
  string document = "AlgoExpert is the Best!";

  cout << generateDocument(characters, document) << endl;

  return 0;
}