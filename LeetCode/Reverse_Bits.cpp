// difficulty Easy

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {

        int ans = 0;
        int count = 0;
        int ith_bit = 0;
        for (int i = 31; i > -1; i++)

        {
            ith_bit = n & (1 << i);
            if (ith_bit == 0)
            {
                continue;
            }
            else
            {
                ans += pow(2, i);
            }
        }
    }
};