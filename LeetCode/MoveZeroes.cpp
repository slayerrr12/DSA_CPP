#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <map>

using namespace std;

// Function to sort an array of integers containing both odd and even numbers
void sortOddAndEvens(vector<int> &nums)
{
    int n = nums.size();
    int i = 0; // Initialize the left pointer
    int j = n - 1; // Initialize the right pointer

    // Continue sorting until the left pointer crosses the right pointer
    while (i < j)
    {
        // Check if both elements are even, move the left pointer to the right
        if ((nums[i] & 1) == 0 && (nums[j] & 1) == 0)
        {
            i++;
            continue;
        }

        // Check if both elements are odd, move the right pointer to the left
        if ((nums[i] & 1) != 0 && (nums[j] & 1) != 0)
        {
            j--;
            continue;
        }

        // Swap if the left element is even and the right element is odd
        if ((nums[i] & 1) == 0 && (nums[j] & 1) != 0)
        {
            i++;
            j--;
            continue;
        }

        // Swap if the left element is odd and the right element is even
        if ((nums[i] & 1) != 0 && (nums[j] & 1) == 0)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
            continue;
        }
    }
}

// Function to print the elements of a vector
void printVector(vector<int> &nums)
{
    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}

// Main function
int main()
{
    // Example vector of integers
    vector<int> nums = {0, 13, 0, 1, 0, 123441, 1, 1, 1, 0};

    // Call the function to sort the array
    sortOddAndEvens(nums);

    // Print the sorted array
    cout << "Sorted array is: " << endl;
    printVector(nums);

    return 0;
}
