#include <bits/stdc++.h>

using namespace std;

bool isSorted(float *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] < arr[1])
    {
        return isSorted(arr + 1, n - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{

    float arr[] = {1, 2, 3, 4, 5.999, 6, 7, 8};
    int n = 8;

    cout << isSorted(arr, n) << endl;

    return 0;
}