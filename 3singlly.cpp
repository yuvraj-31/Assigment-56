/* 3. Given a singly linked list, write a function to swap elements pairwise.
Input : 1->2->3->4->5->6->NULL
Output : 2->1->4->3->6->5->NULL
Input : 1->2->3->4->5->NULL
Output : 2->1->4->3->5->NULL
Input : 1->NULL
Output : 1->NULL     */

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
    void swap()
    {
        node *p=head;
        node *t;
        while(p->next!=NULL)
        {
            t=p->next;
            int y=t->value;
            t->value=p->value;
            p->value=y;
              if(t->next==NULL)
                break;
            p=t->next;
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
    singlyll s1;
    s1.insert(2);
    s1.insert(12);
    s1.insert(3);
    s1.insert(13);

    s1.insert(4);
    s1.insert(14);
    s1.insert(5);
    s1.insert(15);
   s1.insert(12);
    s1.print();
    cout<<endl;
    s1.swap();
    s1.print();

    return 0;

}
