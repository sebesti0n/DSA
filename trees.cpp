#include <iostream>
#include <bits/stdc++.h>
#include "treenode.cpp"
using namespace std;
#define ll long long
void NodesAtDepth(treenode<int> *root,int k)
{if (root==NULL)
{
return;
}
if (k==0)
{cout<<root->data;
return;
}
for (int i = 0; i < root->child.size(); i++)
    {
        NodesAtDepth(root->child[i],k-1);
    }



}
int numofLN(treenode<int> *root)
{
    int ln = 0;
    if (root->child.size() == 0)
    {
        return 1;
    }
    for (int i = 0; i < root->child.size(); i++)
    {
        // if (root->child.size()==0)
        // {
        //  ln++;
        ln += numofLN(root->child[i]);
        // }
    }
    return ln;
}
int height(treenode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int h = 1;
    for (int i = 0; i < root->child.size(); i++)
    {
        if (h <= height(root->child[i]))
        {
            h += height(root->child[i]);
        }
    }

    return h;
}
int length(treenode<int> *root)
{
    int n = 1;
    int i = 0;
    while (i < root->child.size())
    {
        n += length(root->child[i]);
        i++;
    }
    return n;
}
treenode<int> *takeInputLW()
{
    cout << "enter root data " << endl;
    int rootdata;
    cin >> rootdata;
    treenode<int> *root = new treenode<int>(rootdata);
    queue<treenode<int> *> q;
    q.push(root);
    while (q.size() != 0)
    {
        treenode<int> *front = q.front();
        q.pop();
        int nochild;
        cout << "enter num of child of data " << front->data << endl;
        cin >> nochild;
        for (int i = 0; i < nochild; i++)

        {
            cout << "enter " << i << "th child data of " << front->data << endl;
            int childdata;
            cin >> childdata;
            treenode<int> *child1 = new treenode<int>(childdata);
            front->child.push_back(child1);
            q.push(child1);
        }
    }
    return root;
}
treenode<int> *takeinput()
{
    cout << "enter data" << endl;
    int data;
    cin >> data;
    treenode<int> *root = new treenode<int>(data);
    cout << "enter the no. of children" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        treenode<int> *child = takeinput();
        root->child.push_back(child);
    }
    return root;
}
void printtreeLW(treenode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<treenode<int>*> q;
    q.push(root);

    // cout << root->data << ":";
    while (q.size()!=0)
    {treenode<int> *front = q.front();
        cout<<q.front()->data<<":";
        q.pop();
    for (int i = 0; i < front->child.size(); i++)
    {
        cout << front->child[i]->data << "'";
    }
    cout << endl;
    
     for (int i = 0; i < front->child.size(); i++)
    {
       q.push(front->child[i]);
    }
    }
        
    }
    

void printtree(treenode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << ":";
    for (int i = 0; i < root->child.size(); i++)
    {
        cout << root->child[i]->data << "'";
    }
    cout << endl;
    for (int i = 0; i < root->child.size(); i++)
    {
        printtree(root->child[i]);
    }
}
int main()
{
    // int t;
    // cin>>t;
    // while(t--){

    // }
    treenode<int> *root = takeInputLW();
    // treenode<int> *root= new treenode<int>(1);
    // treenode<int>* node1= new treenode<int>(2);
    // treenode<int>* node2= new treenode<int>(3);
    // treenode<int>* node3= new treenode<int>(4);
    // root->child.push_back(node1);
    // root->child.push_back(node2);
    // node1->child.push_back(node3);
 
         printtreeLW(root);
}