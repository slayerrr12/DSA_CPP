
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // vector<int> v;
    // v.push_back(1);//push one  the capacity has changed from 1 to 2

    // v.push_back(2);// push 2 now thw capacitiy has changed from 2 to 4
    // v.push_back(3);

    // cout<<v.size()<<endl;
    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    // v.pop_back();
    // cout<<v.size()<<endl;
    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    // v.clear();
    // cout<<v.capacity()<<endl;
    // the push back operation is expensive because you are spending linear time in  the doubling  operation
    // the pop back operation is constant time
    // the clear operation is constant time
    // the size operation is constant time
    // the capacity operation is constant time
    // the [] operator is constant time

    // Now to avoid the pushback operation problem we generally use the reserve functione take a resever memeory for the vector using the resrve() function
    vector<int> v1;
    v1.reserve(5);
    // we have now a reseved space of 10 elements in the vector
    // now we can push back 10 elements in the vector without any doubling operation
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3); 
    v1.push_back(4);
    v1.push_back(5);
    // cout << "capacity : " << v1.capacity() << endl;
    // v1.push_back(6);
    // cout << "capacity : " << v1.capacity() << endl;
    // v1.push_back(7);
    // v1.push_back(8);

    

    return 0;
}