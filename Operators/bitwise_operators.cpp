#include <iostream>

using namespace std;

/**
 * The main function is the entry point of the program.
 * It demonstrates the usage of bitwise operators.
 */
int main()
{

    int  a = 11;
    int b = 4;

    cout << (a&b) << endl; // 2
    cout << (a | b )<< endl ; //3
    cout << (a ^ b) << endl; //1
    cout << (~a) << endl; // -4
 

    a =1000;
    unsigned int a1 = -1000;
    cout << (a<<4 )<< endl; //right shift 144
    cout << (a>>4) << endl; //left shift 0
    cout << (a1) << endl; //left shift 0


    


    return 0;
}