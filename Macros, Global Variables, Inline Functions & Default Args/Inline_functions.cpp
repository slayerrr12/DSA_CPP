#include <bits/stdc++.h>

using namespace std;

inline int getmax(int a, int b)
{

    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{

    cout << getmax(344, 13143);

    return 2;
}
