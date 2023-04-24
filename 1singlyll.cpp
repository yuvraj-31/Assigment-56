  /*  1. Given a linked list and a key ‘X‘ in, the task is to check if X is present in the linked list
or not.
Examples:
Input: 14->21->11->30->10, X = 14
Output: Yes
Explanation: 14 is present in the linked list.
Input: 6->21->17->30->10->8, X = 13
Output: No     */



#include<iostream>
using namespace std;
class node
{public:
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
       void insertatend(int v)
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
       int search(int x)
       {
           node *t=head;
           while(t!=NULL)
           {
               if(t->value==x)
                  return 1;
               t=t->next;
           }
           return 0;
       }
       void print()
       {
           node *t=head;
           while(t->next!=NULL)
           {cout<<t->value<<" -> ";
            t=t->next;
           }
           cout<<t->value;
       }
};
int main()
{
    Singlyll s1;
    s1.insertatend(4);
    s1.insertatend(5);
     s1.insertatend(15);
      s1.insertatend(20);
      s1.print();
      int x;
      cout<<endl<<"Enter a key to search : ";
      cin>>x;
      if(s1.search(x))
        cout<<"Yes"<<endl;
      else
        cout<<"No"<<endl;

    s1.print();
}
