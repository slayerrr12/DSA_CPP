#include <iostream>
#include <array>
#include <algorithm>


using namespace std;


int main()
{
    array<int,5> arr = {4,20,3,2,4};
    cout<<arr.size()<<endl;// to find size
    cout<<arr.at(1)<<endl;// to access elements
    sort(arr.begin(),arr.end());// to sort the array
    cout<<arr[0]<<endl;// to access first element  
return 0;
}