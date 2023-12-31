#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string defangIPaddr(string address)
    {
        int count = 0;
        for (int i = 0; i < address.size(); i++)
        {
            if (count == 5)
            {
                break;
            }
            if (address[i] == '.')
            {
                address.replace(i, 1, "[.]");
                i += 2;
                count++;
            }
        }

        return address;
    }
};