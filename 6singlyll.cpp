/*
6. Given a singly linked list and a key, count the number of occurrences of the given key
in the linked list. For example, if the given linked list is 1->2->1->2->1->3->1 and the
given key is 1, then the output should be 4.
*/

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
    int countcheck(int y)
    {
        int count=0;
        node *t=head;
        while(t!=NULL)
        {
            if(t->value==y)
                count++;
             t=t->next;
        }
        return count;
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
    s1.insert(13);
    s1.insert(13);

    s1.insert(4);
    s1.insert(14);
    s1.insert(5);
    s1.insert(15);
    s1.print();
    cout<<endl;
    int y;
    cout<<"Enter the number to check occurences : ";
    cin>>y;
   cout<< s1.countcheck(y);

    return 0;
}
