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

void middleElement(stack<int> &InputStack, int count, int size)
{
    if (count == InputStack.size())
    {
        InputStack.pop();
        return;
    }
    else
    {
        int a = InputStack.top();
        InputStack.pop();
        middleElement(InputStack, count, InputStack.size());
        InputStack.push(a);
        return;
    }
}

int main()
{

    stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);
    myStack.push(6);
    myStack.push(7);

    int count;

    if (myStack.size() & 1 == 0)
    {

        count = myStack.size() / 2;
    }
    else
    {
        count = myStack.size() / 2 + 1;
    }

    middleElement(myStack, count, myStack.size());

    while (!myStack.empty())
    {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}
