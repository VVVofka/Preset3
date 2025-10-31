#include <iostream>

int main() {
  std::cout << "Hello, World!" << std::endl;

#ifdef MY_ISTESTING
  std::cout << "Run testing..." << std::endl;
#endif

  return 0;
}
