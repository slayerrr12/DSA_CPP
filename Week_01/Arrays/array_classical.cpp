#include <bits/stdc++.h>

using namespace std;



void updateArray( int arr[], int n , int index){

    // here only the address of the first block is passed into arr 
    // arr is actually a pointer that contains the address of the first block of a 
   
    // so arr[index] = n is actually *(arr+index) = n    
    arr[index] = n;
    cout<<arr[index]<<endl;
}


void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}





int main()
{

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // to find size of array
    cout << sizeof(a)/ sizeof(int) << endl;

    // a contains the adress of the the first block
    cout<<a<<endl;
  printArray(a, 8);
    updateArray(a, 1000000, 5);
    printArray(a, 8);


  
return 0;
}