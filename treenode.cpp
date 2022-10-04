#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class treenode
{public:
T data;
vector<treenode<T>*> child;
    treenode(T data){
    this->data=data;
    }
    
}; 