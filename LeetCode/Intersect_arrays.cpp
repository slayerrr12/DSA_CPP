#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <map>

using namespace std;

class Solution
{
public:
    // Function to find the intersection of two vectors
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        // Sort the input vectors
        sort(nums1.begin(), nums1.end()); // O(nlogn)
        sort(nums2.begin(), nums2.end()); // O(mlogm)
        
        // Initialize an empty vector to store the intersection
        vector<int> ans;
        
        // Initialize two pointers for iterating through the sorted vectors
        int i = 0;
        int j = 0;

        // Check if either of the vectors is empty
        if (nums1.size() == 0 || nums2.size() == 0)
        {
            return ans; // Return an empty vector if either vector is empty
        }

        // Iterate through the vectors to find the common elements
        while (i < nums1.size() && j < nums2.size())
        {
            // If the current elements are equal, add to the intersection and move both pointers
            if (nums1[i] == nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
                continue;
            }
            
            // If the element in nums1 is greater, move the pointer in nums2
            if (nums1[i] > nums2[j])
            {
                j++;
                continue;
            }
            
            // If the element in nums1 is smaller, move the pointer in nums1
            if (nums1[i] < nums2[j])
            {
                i++;
                continue;
            }
        }

        // Return the vector containing the intersection
        return ans;
    }
};

// Main function or any other code can follow after this
