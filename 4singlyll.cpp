/*  4. Write a function that moves the last node to the front in a given Singly Linked List.
Examples:
Input: 1->2->3->4->5
Output: 5->1->2->3->4
Input: 3->8->1->5->7->12
Output: 12->3->8->1->5->7           */

#include<iostream>
using namespace std;
class node{
public:
    int value;
    node *next;
    node()
    {
        next=NULL;
    }
};
class singlyll
{
    node *head;
public:
    singlyll()
    {
        head=NULL;
    }
    void insert(int v)
    {
        node *temp=new node();
           temp->value=v;
           if(head==NULL)
           {
               head=temp;
           }
           else{
               node *t=head;
               while(t->next!=NULL)
                t=t->next;
               t->next=temp;
           }
    }
    void movelast()
    {
        node *t=head;
        node *p;
        while(t->next!=NULL)
        {
            p=t;
            t=t->next;
        }
        p->next=NULL;
        t->next=head;
        head=t;
    }
    void print()
    {
        node *t=head;
        while(t!=NULL)
        {
            cout<<t->value<< " -> ";
            t=t->next;
        }
    }
};
int main()
{
    singlyll s1;
    s1.insert(2);
    s1.insert(12);
    s1.insert(3);
    s1.insert(13);

    s1.insert(4);
    s1.insert(14);
    s1.insert(5);
    s1.insert(15);
    s1.print();
    cout<<endl;
    s1.movelast();
    s1.print();
    return 0;
}
