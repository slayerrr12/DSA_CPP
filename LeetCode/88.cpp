#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        // Create a temporary vector to store the merged result
        vector<int> ans;

        // Pointers for iterating through nums1 and nums2
        int i = 0;
        int j = 0;

        // Merge the two sorted arrays
        while ((n > j && (m > i))) {
            if (nums1[i] >= nums2[j]) {
                // If current element in nums1 is greater or equal, add nums2[j] to the result
                ans.push_back(nums2[j]);
                j++;
            } else {
                // If current element in nums1 is smaller, add nums1[i] to the result
                ans.push_back(nums1[i]);
                i++;
            }
        }

        // Add remaining elements from nums1, if any
        while (i < m) {
            ans.push_back(nums1[i]);
            i++;
        }

        // Add remaining elements from nums2, if any
        while (j < n) {
            ans.push_back(nums2[j]);
            j++;
        }

        // Copy the merged result back to nums1
        for (int i = 0; i < ans.size(); i++) {
            nums1[i] = ans[i];
        }
    }
};

int main() {
    // Example usage of the merge function
    Solution sol;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;
    sol.merge(nums1, m, nums2, n);

    // Print the merged array
    for (int num : nums1) {
        cout << num << " ";
    }

    return 0;
}
