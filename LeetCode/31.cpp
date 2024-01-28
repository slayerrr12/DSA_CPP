
// 1 . Find the break-point, i: Break-point means the first index i from the back of the given array where arr[i] becomes smaller than arr[i+1].
// For example, if the given array is {2,1,5,4,3,0,0}, the break-point will be index 1(0-based indexing). Here from the back of the array, index 1 is the first index where arr[1] i.e. 1 is smaller than arr[i+1] i.e. 5.

// 2 .To find the break-point, using a loop we will traverse the array backward and store the index i where arr[i] is less than the value at index (i+1) i.e. arr[i+1].
// If such a break-point does not exist i.e. if the array is sorted in decreasing order, the given permutation is the last one in the sorted order of all possible permutations. So, the next permutation must be the first i.e. the permutation in increasing order.
// So, in this case, we will reverse the whole array and will return it as our answer.

// 3 .If a break-point exists:
// Find the smallest number i.e. > arr[i] and in the right half of index i(i.e. from index i+1 to n-1) and swap it with arr[i].
// Reverse the entire right half(i.e. from index i+1 to n-1) of index i. And finally, return the array.



#include <vector>
#include <algorithm>

class Solution {
public:
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    void nextPermutation(std::vector<int> &nums) {
        int n = nums.size();
        
        if (n < 2) {
            // Edge case: Not enough elements to permute
            return;
        }

        int breakPoint = -1;

        // Find the first element from the right that is smaller than its next element
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                breakPoint = i;
                break;
            }
        }

        if (breakPoint == -1) {
            // If no such element is found, reverse the entire sequence
            std::reverse(nums.begin(), nums.end());
        } else {
            // Find the smallest element to the right of breakPoint that is greater than nums[breakPoint]
            int smallestGreater = n - 1;
            while (nums[smallestGreater] <= nums[breakPoint]) {
                smallestGreater--;
            }

            // Swap the two elements
            this->swap(nums[breakPoint], nums[smallestGreater]);

            // Reverse the sequence to the right of breakPoint
            std::reverse(nums.begin() + breakPoint + 1, nums.end());
        }
    }
};

int main() {
    // Example usage
    Solution solution;
    std::vector<int> nums = {1, 2, 3};
    solution.nextPermutation(nums);

    // Output the result
    for (int num : nums) {
        std::cout << num << " ";
    }

    return 0;
}
