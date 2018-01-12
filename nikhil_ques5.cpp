/*
Nikhil Chauhan
17BCE0610

Question 7:
Q7. Write a program to insert a node to a linked list a) in nth position
b) before a specific data c) after a specific data in the LL
*/

#include<iostream>

using namespace std;

//structure definition
struct node
{
    int data;
    struct node *next;
}*head;
/*
temp, t, t1, t2 are all used as temporary pointer variables of the node
structure.

p, pos, positions are variables to store positions.
*/


//Inserting Node at Beginning

void insert_begin()
{
    int x;
    cout<<"Enter the data: ";
    cin>>x;
    struct node *temp,*t;
    temp =new(struct node);
    if(temp== NULL)//if memory is not allocated
    {
        cout<<"Memory full\n";
    }
    else
    {
        temp->data=x;
        temp->next= NULL;
    }
    if(head== NULL)
    {
        head= temp;
    }
    else
    {
        t= head;
        head =temp;
        head->next =t;
    }

}

//Inserting node at at position which is passed as an argument.
void insert_pos(int x)
{
    int value,counter = 0,i,position;
    position=x;
    struct node *temp,*t1,*t2;
    cout<<"Enter the value to be inserted: ";
    cin>>value;
    temp =new(struct node);

    if(temp== NULL)//if memory is not allocated
    {
        cout<<"Memory full";
    }
    else
    {
        temp->data=value;
        temp->next=NULL;
    }
    t1=head;
    while (t1!= NULL)
    {
        t1 =t1->next;
        counter++;
    }
    if(position==1)
    {
        if (head== NULL)
        {
            head =temp;
            head->next= NULL;
        }
        else
        {
            t2= head;
            head=temp;
            head->next=t2;
        }
    }
    else if(position>1 && position<=counter)
    {
        t1=head;
        for(i=1;i<position;i++)
        {
            t2= t1;
            t1 =t1->next;
        }
        t2->next = temp;
        temp->next = t1;
    }
    else
    {
        cout<<"\nNot in RAnge\n";
    }
}
int search()
{
    int data,pos=0,value,flag=0;
    struct node *t;
    t= head;
    cout<<"Enter the data: ";
    cin>>value;
    t= head;
    if (head==NULL)
    {
        return 0;
    }

    while (t!= NULL)
    {
        pos++;
        if (t->data == value)
        {
            return pos;
        }
        t=t->next;
    }
    if (flag==0)
        return 0;
}

void display()
{
    struct node *temp;
    temp = head;
    if (head==NULL)
    {
        cout<<"\nEmpty list"<<endl;
        return;
    }

    cout<<"\nList contents: "<<endl;
    while (temp!= NULL)
    {
        cout<<temp->data<<"=>";
        temp=temp->next;
    }

}

int main()
{
    int choice,i,p;
    head=NULL;
    cout<<"\n---------------------------------"
        <<"\nOperations on singly linked list"
        <<"\n---------------------------------\n"
        <<"1.Insert Node at beginning\n"
        <<"2.Insert node at a position\n"
        <<"3.Insert node before a specific data\n"
        <<"4.Insert node after a specific data\n"
        <<"5.Display Contents\n"
        <<"6.Exit\n"
        <<"==================================\n\n";
    do
    {
        cout<<"Choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Inserting Node at Beginning: \n";
            insert_begin();
            cout<<"\n";
            break;
        case 2:
            cout<<"Inserting Node at a Position: \n";
            cout<<"\nEnter the position: ";
            cin>>p;
            insert_pos(p);
            cout<<"\n";
            break;
        case 3:
            cout<<"Insert node before a specific data:\n";
            p=search();
            insert_pos(p);
            cout<<"\n";
            break;
        case 4:
            cout<<"Insert node after a specific data:\n";
            p=search();
            insert_pos(p+1);
            cout<<"\n";
            break;
        case 5:
            cout<<"Display the contents of list: \n";
            display();
            cout<<"\n";
            break;
        case 6:
            cout<<"Exiting...\n";
            break;

        default:cout<<"\nWrong choice\n";
        }
    }while(choice!=6);
    return 0;
}
