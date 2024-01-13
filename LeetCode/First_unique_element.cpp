class Solution {
public:
    int firstUniqChar(string str) {
        // Create an unordered map to store the frequency count of each character
        std::unordered_map<char, int> charCount;

        // Count the frequency of each character in the string
        for (char ch : str) {
            charCount[ch]++;
        }

        // Find the first unique character in the string
        int i = 0;  // Variable to track the current index
        for (char ch : str) {
            // Check if the frequency of the character is 1
            if (charCount[ch] == 1) {
                // If yes, this is the first unique character, return its index
                return i;
            }
            i++;  // Move to the next index
        }

        // If no unique character is found, return -1 as a sentinel value
        return -1;
    }
};
