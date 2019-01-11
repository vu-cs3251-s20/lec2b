/**
 * Filename: AssignCopy.h
 * Class: CS3251
 *
 * @author G. Hemingway
 * Description: Gain some intuition on copy-vs-assignment
 *
 **/
#include <iostream>

class Foo {
public:
  Foo(const int a = 0) : val(a) {
    std::cout << "Default constructor" << std::endl;
  }

  Foo(const Foo &rhs) : val(rhs.val) {
    std::cout << "Copy constructor" << std::endl;
  }

  Foo &operator=(const Foo &rhs) {
    std::cout << "Assignment operator" << std::endl;
    val = rhs.val;
    return *this;
  }

  int value() { return val; }

private:
  int val;
};

int main() {
  Foo x(9);
  std::cout << "x's value is: " << x.value() << std::endl;

  // Foo y(x);
  // std::cout << "y's value is: " << y.value() << std::endl;

  // Foo z = x;
  // std::cout << "z's value is: " << z.value() << std::endl;

  return 0;
}
