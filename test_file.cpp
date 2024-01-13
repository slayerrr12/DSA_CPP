#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<char, int> unorderedMap;

    // Insert elements into the unordered_map
    unorderedMap['c'] = 3;
    unorderedMap['a'] = 1;
    unorderedMap['b'] = 2;
    unorderedMap['d'] = 1;
    unorderedMap['q'] = 3;
    unorderedMap['g'] = 1;
    unorderedMap['f'] = 2;
    unorderedMap['l'] = 1;

    // Iterate through the unordered_map to observe the order
    for (const auto& pair : unorderedMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
