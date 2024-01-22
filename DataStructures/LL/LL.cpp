#include <bits/stdc++.h>

using namespace std;

class node
{

public:
    int data;
    node *next = NULL;
};

int main()
{
    node *n1 = new node();
    node *n2 = new node();
   


    n1->next = n2;
    n2->data = 98;

    
    return 0;
}
