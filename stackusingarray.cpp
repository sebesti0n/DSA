
#include <bits/stdc++.h>
using namespace std;

class stackusingarray
{
private:
    int *data;
    int top;

public:
    int n;
    stackusingarray()
    {
        data = new int[3];
        top = 0;
        n = 3;
    }
    void push(int n1)
    {
        if (top == n)
        {
            int *newdata = new int[2 * n];
            for (int i = 0; i < n; i++)
            {
                newdata[i] = data[i];
                n = 2 * n;
                delete data;
                data = newdata;
            }
        }
        data[top] = n1;
        top++;
    }
    int pop()
    {
        if (top == 0)
        {
            cout << "stack is empty" << endl;
            return INT_MIN;
        }

        top--;
        return data[top];
    }
    int size()
    {
        return top;
    }
    bool isempty()
    {
        return top == 0;
    }
    int top_elem()
    {
        if (top <= 0)
        {
            cout << "stack is empty" << endl;
            return INT_MIN;
        }
        return data[top - 1];
    }
};
