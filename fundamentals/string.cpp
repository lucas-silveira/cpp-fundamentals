#include "iostream"

int main() {
  /*
    String type is a class. It's belongs to std namespace.
  */
  std::string title = "Mr. ";
  std::string name("John");
  std::string end(10, '!'); // another way for initialize string

  std::cout << end << std::endl; // !!!!!!!!!!

  std::cout << name.size() << std::endl; // 4
  std::cout << name.back() << std::endl; // n (last char)
  std::cout << name[0] << std::endl; // J (nth char)
  std::cout << title + name << std::endl; // Mr. John (concat strings)
  std::cout << title.append(name).append(end) << std::endl; // Mr. John!!!!!!!!!! (concat strings)

  return 0;
}