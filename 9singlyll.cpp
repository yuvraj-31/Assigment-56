/*
9. In a singly linked list of characters, write a function that returns true if the given list is
a palindrome, else false.
*/

#include<iostream>
using namespace std;
class node
{   public:
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
            {
                t=t->next;
            }
            t->next=temp;
        }
    }
    bool check_palindrome()
    {
        node *t=head;
        int size=0;
        while(t->next!=NULL)
        {
            t=t->next;
            size++;
        }
        int i=0;
        int s=size;
        node *p=head;
        while(i<=size/2)
        {
            node *x=head;
            int j=0;
            while(s>j)
            {
                x=x->next;
                j++;
            }
            if(x->value!=p->value)
                return 0;
            p=p->next;
            s--;i++;
        }
        return 1;

    }
    void print()
    {
        node *t=head;
        while(t!=NULL)
            {
                cout<<t->value<<" -> ";
             t=t->next;}
    }
};
int main()
{
    singlyll l1;
    l1.insert(2);
    l1.insert(4);
   // l1.insert('A');
    l1.insert(4);
    l1.insert(2);
    cout<<l1.check_palindrome()<<endl;
    l1.print();
}
