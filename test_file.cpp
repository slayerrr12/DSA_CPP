#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    std::cout << "length before " << str.length() << std::endl; 
    // Erase 7 characters starting from position 7
    str.erase(7, 7);
    std::cout << str << std::endl;  // Output: Hello!

    // Erase all characters from position 7 to the end
    str.erase(3);
    std::cout << str << std::endl;
        std::cout << "length after " << str.length() << std::endl;   // Output: Hello

    return 0;
}
