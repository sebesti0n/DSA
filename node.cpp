#include <iostream>
class node
{
public:
    int value;
    node *next;

public:
    node(int value)
    {
        this->value = value;
        next = NULL;
    }
    void print()
    {
        std::cout << value << "\n";
    }
};
