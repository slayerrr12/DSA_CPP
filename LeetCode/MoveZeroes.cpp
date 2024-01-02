class Solution
{
public:
    void moveZeroes(vector<int> &num)
    {
        // If the vector has only one element, no need to perform any operations
        if (num.size() == 1)
        {
            return;
        }

        // Initialize two indices, z for the first zero and nz for the first non-zero
        int z = 0;
        int nz = 1;

        // Iterate through the vector
        while (nz < num.size())
        {
            // If both elements at indices z and nz are zero, move to the next non-zero index
            if (num[z] == 0 && num[nz] == 0)
            {
                nz++;
                continue;
            }

            // If the element at index z is zero and the element at index nz is non-zero
            if (num[z] == 0 && num[nz] != 0)
            {
                // Swap the zero and non-zero elements
                int temp = num[z];
                num[z] = num[nz];
                num[nz] = temp;
                // Move to the next zero and non-zero indices
                z++;
                nz++;
                continue;
            }

            // If both elements at indices z and nz are non-zero, move to the next indices
            if (num[z] != 0 && num[nz] != 0)
            {
                z++;
                nz++;
                continue;
            }

            // If the element at index z is non-zero and the element at index nz is zero
            if (num[z] != 0 && num[nz] == 0)
            {
                // Move to the next zero and non-zero indices
                z++;
                nz++;
                continue;
            }
        }
    }
};
