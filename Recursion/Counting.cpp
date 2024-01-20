#include <bits/stdc++.h>

using namespace std;

void count(int n)
{

    if (n == 0)
    {
        cout << 0 << endl;

        return;
    }

    else
    {

        cout << n << endl;
        count(n - 1);
    }
}

int main()
{

    count(10);

    return 0;
}