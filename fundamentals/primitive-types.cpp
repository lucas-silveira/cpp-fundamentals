#include "iostream"

int main() {
  bool isA = true;
  bool isB = false;
  bool isC = 1; // true
  bool isD = 0; // false

  char symbol = 'a'; // 8 bits
  char16_t symbol2 = 'a'; // 16 bits
  char32_t symbol3 = 'a'; // 32 bits
  wchar_t symbol4 = 'a'; // 32 bits

  int aNumber = 10000;
  // modifiers for int type: signed, unsigned, short, long, long long
  short int upToTen = 8;
  short upToTen2 = 7; // we can omit the type signature
  unsigned short int age = 31;

  float pi = 3.14; // 32 bits
  double pi2 = 3.141592; // 64 bits
  const double PI = 3.141592;

  std::cout << sizeof(char) << " byte" << std::endl; // 1 byte
  std::cout << sizeof(char16_t) << " byte" << std::endl; // 2 byte
  std::cout << sizeof(char32_t) << " byte" << std::endl; // 4 byte
  std::cout << sizeof(wchar_t) << " byte" << std::endl; // 4 byte
  std::cout << sizeof(short int) << " bytes" << std::endl; // 2 bytes
  std::cout << sizeof(int) << " bytes" << std::endl; // 4 bytes
  std::cout << sizeof(long int) << " bytes" << std::endl; // 8 bytes
  std::cout << sizeof(long long int) << " bytes" << std::endl; // 8 bytes
  std::cout << sizeof(float) << " bytes" << std::endl; // 4 bytes
  std::cout << sizeof(double) << " bytes" << std::endl; // 8 bytes

  return 0;
}