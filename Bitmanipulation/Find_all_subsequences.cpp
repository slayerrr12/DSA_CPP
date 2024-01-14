#include <bits/stdc++.h>
#include <iostream>
#include <string.h>

using namespace std;



void overLay

void generateAllSUbsequneces(char *arr){
    int n = strlen(arr);

    for(int i = 0 ; i <(i<<n) ; i++){
        for (int j = 0; j < n; j++)
        {
            if((i & (1<<j)) != 0){
                cout << arr[j];
            }
        }
    }
}



int main()
{

    char arr[10000];
    cin >> arr;


return 0;
}