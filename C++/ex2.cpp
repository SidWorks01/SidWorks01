#include <iostream>
#include <string>
using namespace std;

int main() {
  struct _human{
    int age;
    string name;
  } ;

  _human h1;
  _human h2;
  h1.age = 21;
  h1.name = "Siddhant";

  cout << h1.age << "\n";
  cout << h1.name << "\n";

  h2.age = 52;
  h2.name = "Sachin";
   cout << h2.age << "\n";
  cout << h2.name << "\n";
  return 0;
}
