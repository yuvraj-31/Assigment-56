/*
8. Create a Stack using a singly linked list.  */
#include<iostream>
using namespace std;
 class node
 { public:
     int value;
     node *next;
     node()
     {
         next=NULL;
     }
 };
 class Stack
 {
     node *top;
 public:
    Stack()
    {
        top=NULL;
    }
    void push(int v)
    {
        node *temp=new node();
        if(!temp)
        {
            cout<<"Stack overflow"<<endl;
            return;
        }
        temp->value=v;
        temp->next=top;
        top=temp;
    }
    int pop()
    {
        if(top==NULL)
        {
            cout<<"Stack undeflow"<<endl;
           return 0;
        }
        node *t=top;
        int x=t->value;
        top=top->next;
        delete t;
        return x;
    }
    void print()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty"<<endl;
        }
        node *t=top;
        while(t!=NULL)
        {
            cout<<t->value<<" -> ";
            t=t->next;
        }
    }
 };
 int main()
 {
     Stack s1;
     s1.push(2);
     s1.push(3);
     s1.push(4);
     s1.print();
     cout<<endl<<"Popped Element: "<<s1.pop()<<endl;
     s1.print();
      cout<<endl<<"Popped Element: "<<s1.pop()<<endl;
     s1.print();
      cout<<endl<<"Popped Element: "<<s1.pop()<<endl;
     s1.print();
       cout<<endl<<"Popped Element: "<<s1.pop()<<endl;
     s1.print();
      }
