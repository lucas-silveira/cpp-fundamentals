/*
  Convert name prefix to periodic symbols
  Write a function that takes in an array of names and other one of symbols
  and returns a new name with the prefix as symbol.

  Sample Input
  name = "henry albi"
  symbols = ["H", "He", "Li", "Be", "Na", "C", "O", "N", "Al"]

  Sample Output
  "[He]nry [Al]bi"
*/

#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <cstring>
using namespace std;

/*
  This solution has a time complexity O(n^2) and a space complexity O(n)
*/

string toLowerCase(string str) {
  string newStr;

  for (char ch : str) {
    newStr += tolower(ch);
  }

  return newStr;
}

string format(string fullName, vector<string> symbols) {
  map<string, string> hashSymbols;

  for (string symb : symbols) {
    hashSymbols[toLowerCase(symb)] = symb;
  }

  stringstream fullNameCp(fullName);
  string segment;
  vector<string> segments;
  while (getline(fullNameCp, segment, ' ')) {
    segments.push_back(segment);
  }

  string newFullName;
  for (string word : segments) {
    string rest, newWord, currComb = toLowerCase(word);

    for (int i = 0; i < word.size(); i++) {
      auto symbIt = hashSymbols.find(currComb);

      if (symbIt != hashSymbols.end()) {
        newWord.push_back('[');
        newWord.append(symbIt->second);
        newWord.push_back(']');
        newWord.append(rest);
        break;
      }

      rest = currComb.back() + rest;
      currComb.pop_back();
    }

    if (newFullName.size() > 0) newFullName.push_back(' ');
    if (newWord.size() > 0) newFullName.append(newWord);
    else newFullName.append(word);
  }

  return newFullName;
}

int main()
{
  vector<string> symbols = {"H", "He", "Li", "Be", "Na", "C", "O", "N", "Al"};

  cout << format("henry albi", symbols) << endl;
  cout << format("Higu Benedit Juf", symbols) << endl;
  cout << format("leon j miller", symbols) << endl;

  return 0;
}