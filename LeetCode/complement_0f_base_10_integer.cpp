class Solution
{
public:
    int bitwiseComplement(int n)
    {
        int mask = 0;
        int n1 = n;
        int fliiped_bits = ~n;
        int n2 = n;
        // calculating mask
        while (n2)
        {

            n2 = n2 >> 1;
            mask = (mask << 1) | 1;
        }

        return fliiped_bits & mask;
    }
};