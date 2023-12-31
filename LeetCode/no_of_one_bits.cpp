#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        //using bit masking and also checking each bit
        for (int i = 0; i < 31; i++)

        {
            if((n&(1<<i))!=0){
                count++;
            }
          
        }
        return count;
        
    }
};