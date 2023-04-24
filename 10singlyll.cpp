/*
10. Given a singly linked list, find the middle of the linked list. For example, if the given
linked list is 1->2->3->4->5 then the output should be 3.
If there are even nodes, then there would be two middle nodes, we need to print the
second middle element. For example, if the given linked list is 1->2->3->4->5->6 then
the output should be 4.
*/
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
    int findmiddle()
    {
        node *t=head;
        int size=0;
        while(t->next!=NULL)
           {
              t=t->next;
              size++;
           }
           //cout<<size;
           t=head;
           int i=0;
           while(i<(size+1)/2)
           {
               t=t->next;
               i++;
           }
           return t->value;
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

    l1.insert(14);
    l1.insert(21);
    cout<<"Middle Element: "<<l1.findmiddle()<<endl;
    l1.print();
    return 0;
}
