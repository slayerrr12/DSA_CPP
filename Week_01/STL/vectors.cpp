#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);//push one  the capacity has changed from 1 to 2

    v.push_back(2);// push 2 now thw capacitiy has changed from 2 to 4   
    v.push_back(3);

    cout<<v.size()<<endl;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    v.pop_back();
    cout<<v.size()<<endl;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    v.clear();
    cout<<v.capacity()<<endl;
   

 return 0;
}