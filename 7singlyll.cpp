/*
7. Given a Linked List and a number N, write a function that returns the value at the Nth
node from the end of the Linked List.
Examples:
Input: 1 -> 2 -> 3 -> 4, N = 3
Output: 2
Input: 35 -> 15 -> 4 -> 20, N = 4
Output: 35
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
  int valueatnodefromlast(int y)
  {
      node *t=head;
      int count=0;
      int x;
      while(t!=NULL)
      {
          if(t->value==y)
             x=count;
          t=t->next;
          count++;
      }
      return count-x;
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
    int x;
    cout<<"Enter the value  : ";
    cin>>x;
    cout<<s1.valueatnodefromlast(x);

    return 0;
}

