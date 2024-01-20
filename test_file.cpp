#include <iostream>
#include <stack>
#include <string>


using namespace std ;




int main() {

    int *ptr = NULL;
    cout<<"value of p when pointed to null : "<<ptr<<endl;
    ptr = 0;
    cout<<"value of p when pointed to 0 : "<<ptr<<endl;

    int a = 3;
    ptr = &a;
    cout<<"address of a  : "<<ptr<< " and the value at that address : "<< *ptr<< endl;
   


   
    return 0;
   
}
