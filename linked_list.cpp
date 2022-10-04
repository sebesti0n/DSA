#include <bits/stdc++.h>
#include "node.cpp"

using namespace std;
node *takeinput()
{
    node *head = NULL, *temp = NULL;
    int data;
    cin >> data;
    while (data != -1)
    {
        node *n = new node(data);
        if (temp != NULL)
        {
            temp->next = n;
        }

        if (head == NULL)
        {
            head = n;
        }
        temp = n;

        cin >> data;
    }
    return head;
}
void printll(node *n)
{
    while (n != NULL)
    {
        cout << n->value << " ";
        n = n->next;
    }
}

node *insert(node *head, int n, int data)
{
    node *newnode = new node(data);
    node *temp = head;
    if (n == 0)
    {
        head = newnode;
        newnode->next = temp;
        return head;
    }
    else
    {
        int count = 0;
        while (temp != NULL && count < n - 1)
        {
            temp = temp->next;
            count++;
        }
        if (temp != NULL)
        {
            node *a = temp->next;
            temp->next = newnode;

            newnode->next = a;
        }
        return head;
    }
}
node *delete_node(node *head, int n)
{
    node *temp = head;
    if (n == 0)
    {
        head = temp->next;
    }
    else if (n > 0)
    {
        int count = 0;
        while (temp != NULL && count < n - 1)
        {
            temp = temp->next;
            count++;
        }
        if (temp != NULL)
        {

            node *a = temp;
            temp = temp->next;
            temp = temp->next;
            a->next = temp;
        }
    }
    return head;
}
int length(node *head)
{
    node *temp = head;
    if (temp == NULL)
    {
        return 0;
    }
    else
    {
        int a = 1, r = a + length(temp->next);
        return r;
    }
}

int main()
{
    /* int t;cin>>t;
      while(t--){
  int v;cin>>v;
  node n1(v);
  node *head=&n1;
  for (int i = 2; i <=10; i++)
  {
      int v1;
      cin>>v1;
      node ni(v);
  }

  cout<<n1.value<<" p "<< head->value->;
  node n2(2);
  n1.next=&n2;
  node n3(3);
  n2.next=&n3;
  node n4(4);
  n3.next=&n4;
  node n5(5);
  n4.next=&n5;
  printll(head);
  int a;
  node *head=takeinput();
  cin>>a;
  head=insert(head,2,a);
  head=delete_node(head,a);
  printll(head);
  cout<<length(head);
  cout<<endl;
      }*/
}