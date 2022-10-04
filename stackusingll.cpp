#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <typename t>
class node
{
public:
    t value;
    node<t> *next;
    // public:
    //     node(t value){
    //         this->value=value;
    //         next=NULL;

    //     }
};
template <typename t>
class stackusingll
{
private:
    node<t> *head;
    int size;

public:
    stackusingll()
    {
        head = NULL;
        size = 0;
    }
    int getsize()
    {
        return size;
    }
    bool isempty()
    {
        if (size == 0)
        {
            return true;
        }
        return false;
    }
    void push(t element)
    {
        node<t> *temp = new node<t>();
        temp->value = element;
        temp->next = head;
        head = temp;
        size++;
    }
    t pop()
    {
        if (head == NULL)
        {
            cout << "the stack is empty" << endl;
            return INT_MIN;
        }

        t firstelement = head->value;
        head = head->next;
        size--;
        return firstelement;
    }
    t top()
    {
        t topelement = head->value;
        return topelement;
    }
};
