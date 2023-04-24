/*  5. Given a linked list, check if the linked list has a loop or not. The below diagram shows
a linked list with a loop.     */

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
    bool checkloop()
    {
        node *s=head;
        node *f=head;
        while(s&&f&&f->next)
        {
            f=f->next->next;
            s=s->next;
            if(s==f)
                return true;
        }
        return false;
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

    cout<<s1.checkloop();

    return 0;
}


