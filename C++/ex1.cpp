#include <iostream>
#include <string>
using namespace std;

int main() {
  struct _structure{
    int myNum;
    string myString;
  } ;

  _structure myStructure;
  _structure mystruct1;
  myStructure.myNum = 1;
  myStructure.myString = "Hello World!";

  cout << myStructure.myNum << "\n";
  cout << myStructure.myString << "\n";
  return 0;
}
