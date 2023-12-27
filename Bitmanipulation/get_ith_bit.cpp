#include <bits/stdc++.h>

using namespace std;

int ith_bit(int n, int i)
{
    int ith_bit = (n & (1 << i));
    if (ith_bit == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n = 222;
    cout << ith_bit(n, 3) << endl;


    return 0;
}