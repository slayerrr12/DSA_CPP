
// approach 1
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int mask = 0;

        int n2 = n;
        // calculating mask
        while (n2)
        {

            n2 = n2 >> 1;
            mask++;
        }
        bool ans = (n == pow(2, mask - 1)) return ans;
    }
};

// approach 2

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        return n > 0 && not(n & n - 1);
    }
};