#include <iostream>
#include <stack>
#include <string>

int main() {
    std::stack<char> charStack;
    std::string originalOrderString;

    // Push elements onto the stack
    charStack.push('A');
    charStack.push('B');
    charStack.push('C');

    // Pop elements from the stack and append to the string
    while (!charStack.empty()) {
        originalOrderString = charStack.top() + originalOrderString;
        charStack.pop();
    }

    // Output the string in the original order
    return originalOrderString ;

   
}
