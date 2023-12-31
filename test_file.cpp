// difficulty Easy

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{

    int n = 12;
    int n1 = 12 ;
    int ans = 0;
    int count = 0;
    int ith_bit = 0;
    int j = 0;
    for (int i = 31; i > -1; i--)

    {
        ith_bit = n & (1 << i);
        if (ith_bit == 0)
        {
            continue;
        }
        else
        {
            j = 32 - i;
            ans += pow(2, j);
            
        }

    }
    cout << ans << endl;

    return 0;
}

