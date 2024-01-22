#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void reverse(int *arr, int i, int j)
{
    if (i < j)
    {
        swap(arr[i], arr[j]);
        reverse(arr, i + 1, j - 1);
    }
    else
    {
        return;
    }
    return;
}

int main()
{
    int sampleArray[] = {1, 2, 3, 4, 5};
    reverse(sampleArray, 0, 4);
    int arraySize = sizeof(sampleArray) / sizeof(sampleArray[0]);

    // Print the elements of the array
    cout << "Elements of the array: ";
    for (int i = 0; i < arraySize; ++i)
    {
        cout << sampleArray[i] << " ";
    }

    return 0;
}