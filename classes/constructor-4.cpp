#include <iostream>
using namespace std;

class Actor {
  public:
    string name;
    string email;

    Actor(string name = "Unknown", string email = "-") 
      : name(name), email(email) {}

    string toString() {
      return name + " [" + email + "]";
    }
};

int main()
{
  Actor actor1("Steve", "steve@office.com");

  cout << actor1.toString() << endl;

  return 0;
}