#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    
#ifdef NDEBUG
    std::cout << "Running in Release mode (optimized)" << std::endl;
#else
    std::cout << "Running in Debug mode" << std::endl;
#endif
    
    return 0;
}
