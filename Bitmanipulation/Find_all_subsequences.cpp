#include<iostream>
#include<cstring>
using namespace std;

// Function to print characters based on binary representation of a number
void overLaynumber(char arr[], int number) {
    int j = 0;

    while (number > 0) {
        int last_bit = number & 1;
        if (last_bit) {
            cout << arr[j];
        }

        j++;
        number = number >> 1;
    }
    cout << endl;
}

// Function to generate all subsequences of a given character array
void generateAllSubsequences(char arr[]) {
    int n = strlen(arr);

    // Iterate through all possible values of i using bitmask
    for (int i = 0; i < (1 << n); i++) {
        // Print characters based on the current bitmask
        overLaynumber(arr, i);
    }
    return;
}

int main() {
    // Subsets / Subsequences
    char arr[10000];
    // Input the character array from the user
    cin >> arr;
    // Generate and print all subsequences
    generateAllSubsequences(arr);

    return 0;
}
