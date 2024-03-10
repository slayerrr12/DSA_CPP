#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <iterator>
#include <algorithm>
#include <functional>
#include <utility>
#include <memory>
#include <tuple>
#include <numeric>

using namespace std;

void PushInLast(stack<int> &InputStack,  int val)
{
    if (InputStack.empty())
    {
        InputStack.push(val);
        return;
    }
    else
    {
        int a = InputStack.top();
        InputStack.pop();
        PushInLast(InputStack,val);
        InputStack.push(a);
        return;
    }
}

void Reverse(stack<int> &InputStack)
{
    if (InputStack.empty())
    {
        
        return;
    }
    else
    {
        int a = InputStack.top();
        InputStack.pop();
        Reverse(InputStack);
        PushInLast(InputStack,a);
        return;
    }
}



int main()
{

    stack<int> myStack;
    int val  = 19;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);
    myStack.push(6);
    myStack.push(7);

   

    Reverse(myStack);
    std::cout << "Elements of the stack: ";
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }
    std::cout << std::endl;

    

    return 0;
}
