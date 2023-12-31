class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        // Initialize the result to store the reversed bits.
        uint32_t ans = 0;

        // Counter variable to keep track of the position of the reversed bit.
        int j = 0;

        // Loop through each bit of the input number from the most significant bit (31) to the least significant bit (0).
        for (int i = 31; i >= 0; i--)
        {
            // Extract the i-th bit from the input number.
            int ith_bit = n & (1 << i);

            // Check if the i-th bit is 1 (not 0).
            if (ith_bit != 0)
            {
                // If the i-th bit is 1, set the corresponding bit in the result using bitwise left shift.
                ans |= (1u << j);
            }

            // Increment the counter variable to move to the next position for the reversed bit.
            j++;
        }

        // Return the final result with reversed bits.
        return ans;
    }
};
