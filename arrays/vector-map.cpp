#include <iostream>
#include <vector>
using namespace std;

template <typename T> // define a generic
using mapFn = T(*)(T);

template <typename T>
vector<T> map(vector<T> v, mapFn<T> fn) {
  vector<int> newVector;
  for (auto el: v) newVector.push_back((*fn)(el));

  return newVector;
}

int main()
{
  auto square = [](int x) { return x * x; }; // lambda function
  auto triple = [](int x) { return 3 * x; };

  vector<int> nums = {2, 5, 8, 23, 56};
  vector<int> squares = map<int>(nums, square);
  vector<int> triples = map<int>(nums, triple);

  for (auto n: nums) cout << n << "\t";
  cout << endl;
  for (auto sq: squares) cout << sq << "\t";
  cout << endl;
  for (auto tr: triples) cout << tr << "\t";

  return 0;
}