#include <iostream>
#include "sample2.h"

int main() {
  MyString s;
  s.Set("Hello, World!");
  std::cout << s.c_string() << std::endl;
  return 0;
}

