#include <bits/stdc++.h>

using namespace std;

int binarySearch(int *arr, int start, int end, int n)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2; // to avoid overflow

        if (arr[mid] == n)
        {
            return mid;
        }
        else if (arr[mid] > n)
        {
            // Search in the left half
            return binarySearch(arr, start, mid - 1, n);
        }
        else
        {
            // Search in the right half
            return binarySearch(arr, mid + 1, end, n);
        }
    }

    // Return -1 if the element is not found
    return -1;
}

int main()
{
    int sortedArray[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    int size = sizeof(sortedArray) / sizeof(sortedArray[0]);
    cout << binarySearch(sortedArray, 0, size - 1, 6) << endl;

    return 0;
}


