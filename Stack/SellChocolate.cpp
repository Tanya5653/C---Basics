// A shop has a stack of chocolate boxes each containing a positive number of
// chocolates. Initially, the stack is empty. During the next N minutes,
//  either of these two things may happen:
// The box of chocolates on top of the stack gets sold
// You receive a box of chocolates from the warehouse and put it on top of the stack.
// Determine the number of chocolates in the sold box each time he sells a box.
// Notes

// If C[i] = 0, he sells a box. If C[i] > 0, he receives a box containing C[i] chocolates.
// It is confirmed that he gets a buyer only when he has a non-empty stack.
// The capacity of the stack is infinite.
// Example 1

// Assumptions

// Input

// N = 4
// C = [2, 1, 0, 0]
// Output: 1 2

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    int c[4] = {2, 1, 0, 0};
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (c[i] == 0)
        {
            cout << s.top() << endl;
            s.pop();
        }
        else
        {
            s.push(c[i]);
        }
    }
    return 0;
}
