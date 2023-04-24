/*   2. Write a function that takes a list sorted in non-decreasing order and deletes any
duplicate nodes from the list. The list should only be traversed once.
For example if the linked list is 11->11->11->21->43->43->60 then
removeDuplicates() should convert the list to 11->21->43->60.          */

#include<iostream>
using namespace std;
class node
{
    public:
    int value;
    node *next;
    node()
    {
        next=NULL;
    }
};
class Singlyll
{
    node *head;
public:
    Singlyll()
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
            node *p;
            while(t!=NULL)
               {  if(t->value>v)
                   {
                      int y=t->value;
                      t->value=temp->value;
                      temp->value=y;

                      temp->next=t->next;
                      t->next=temp;
                      return;
                   }
                   p=t;
                   t=t->next;
               }
            p->next=temp;
        }
    }
    void removeDuplicates()
    {
      node *p=head;
        while(p->next!=NULL)
        {
            node *t;
            t=p->next;
            if(p->value==t->value)
            {
                p->next=t->next;
                delete t;
            }
            else
                p=p->next;

        }
    }
    void print()
    {
        node *t=head;
        while(t!=NULL)
          {
            cout<<t->value<<" -> ";
            t=t->next;
          }
    }
};
int main()
{
    Singlyll s1;
    s1.insert(2);
    s1.insert(21);
    s1.insert(1);
    s1.insert(15);
    s1.insert(2);
    s1.insert(1);
    s1.print();
    cout<<endl<<"After removing duplicates"<<endl;
    s1.removeDuplicates();
    s1.print();
    return 0;
}
