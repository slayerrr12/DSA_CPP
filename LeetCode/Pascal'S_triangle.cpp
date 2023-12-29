#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> result;

        for (int i = 0; i < numRows; i++) {
            std::vector<int> row(i + 1, 1);

            for (int j = 1; j < i; j++) {
                row[j] = result[i - 1][j - 1] + result[i - 1][j];
            }

            result.push_back(row);  // Add the current row to the result vector
        }

        return result;
    }
};
