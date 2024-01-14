// Definition of a class named Solution
class Solution {
public:
    // Function to remove duplicates from a sorted vector and return the new size
    int removeDuplicates(vector<int>& nums) {
        // Initialize a variable 'j' to 1, representing the current index for non-duplicate elements
        int j = 1;

        // Iterate through the vector starting from the second element (index 1)
        for(int i = 1; i < nums.size(); i++) {
            // Check if the current element is different from the previous one
            if(nums[i] != nums[i - 1]) {
                // If different, update the vector at index 'j' with the current element
                nums[j] = nums[i];
                
                // Increment 'j' to move to the next index for non-duplicate elements
                j++;
            }
        }

        // 'j' now represents the new size of the vector without duplicates
        return j;
    }
};
