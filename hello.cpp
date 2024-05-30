#include <iostream>
#include "myclass.h"

using namespace std;

int main () {
  cout << "Hello World" << endl;

  MyClass a(5);
  cout << a.getX() << endl;
  // This is a change. It is different
  // This also a change. It is the same
  // conflict
}
