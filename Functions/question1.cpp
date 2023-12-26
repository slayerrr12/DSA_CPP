#include <bits/stdc++.h>

using namespace std;
// using normal method
bool checkEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CheckEvenBitwise(int n)
{
    if (n & 1 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    // if (checkEven(n))
    // {
    //     cout << "even" << endl;
    // }
    // else
    // {
    //     cout << " odd" << endl;
    // }
    // if (CheckEvenBitwise(n))
    // {
    //     cout << "even" << endl;
    // }
    // else
    // {
    //     cout << " odd" << endl;
    // }
    // why use bitwise operations because they are faster
    // and they are used in competitive programming
    return 0;
}