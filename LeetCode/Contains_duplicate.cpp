class Solution
{
public:
    // Function to check if the given vector contains duplicate elements
    bool containsDuplicate(vector<int> &nums)
    {
        // Create a set to store unique elements encountered so far
        set<int> mySet;

        // Iterate through the elements of the vector
        for (int i = 0; i < nums.size(); i++)
        {
            // Attempt to insert the current element into the set
            auto result1 = mySet.insert(nums[i]);

            // If the insertion was unsuccessful (element already exists in the set)
            if (result1.second == false)
            {
                // The vector contains a duplicate element
                return true;
            }
        }

        // No duplicate elements found in the vector
        return false;
    }
};

// TIme Complexity - O(n)