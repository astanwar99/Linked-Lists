//Implementation of Singly Linked List

#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
}*head;

class singly_linked_list
{
public:
    *node create_node(int);
    void insert_begin();
    void insert_pos();
    void insert_end();
    void delete_begin();
    void delete_pos();
    void delete_end();
    void update();
    void search_list();
    void sort_list();
    void reverse_list();
    void display();
    singly_linked_list()
    {
        head = NULL;
    }

};


int main()
{
    int choice,i;
    singly_linked_list s1;

    do
    {
        cout<<"\n---------------------------------\n"
            <<"\nOperations on singly linked list\n"
            <<"\n---------------------------------\n"
            <<"1.Insert Node at beginning\n"
            <<"2.Insert node at position\n"
            <<"3.Insert node at end\n"
            <<"4.Delete the first node\n"
            <<"5.Delete a Particular Node\n"
            <<"6.Delete the last node\n"
            <<"7.Update Node Value\n"
            <<"8.Search Element\n"
            <<"9.Sort list\n"
            <<"10.Reverse Linked List\n"
            <<"11.Display Linked List \n"
            <<"12.Exit \n"
            <<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Inserting Node at Beginning: \n";
            sl.insert_begin();
            cout<<"\n";
            break;
        case 2:
            cout<<"Inserting Node at a Position: \n";
            sl.insert_pos();
            cout<<"\n";
            break;
        case 3:
            cout<<"Inserting Node at end:\n";
            sl.insert_end();
            cout<<"\n";
            break;
        case 4:
            cout<<"Deleting the first node\n";
            sl.delete_begin;
            cout<<"\n";
            break;
        case 5:
            cout<<"Deleting a particular node: \n";
            sl.delete_pos();
            cout<<"\n";
            break;
        case 6:
            cout<<"Deleting the last node: \n";
            sl.delete_end();
            cout<<"\n";
            break;
        case 7:
            cout<<"Updating an existing node: \n";
            sl.update();
            cout<<"\n";
            break;
        case 8:
            cout<<"Searching in the list: \n";
            sl.search_list();
            cout<<"\n";
            break;
        case 9:
            cout<<"Sorting the elements of the list: \n";
            s1.sort_list();
            cout<<"\n";
        case 10:
            cout<<"Reverse elements of Link List\n";
            sl.reverse_list();
            cout<<"\n";
            break;
        case 11:
            cout<<"Display the contents of list: \n";
            s1.display();
            cout<<"\n";
        case 12:
            cout<<"Exiting...\n";
            exit(1);
            break;
        default:
            cout<<"Wrong choice\n";
        }

    }while(choice!=12);

    return 0;
}

//Create Node

*node singly_linked_list::create_node(int value)
{
    struct node *temp;
    temp = new(struct node);

    if(temp == NULL)
    {
        cout<<"Memory full\n";
        return 0;
    }
    else
    {
        temp->data = value;
        temp->next = NULL;
        return temp;
    }

}

//Inserting Node at Beginning

void singly_linked_list::insert_begin()
{
    int val;
    cout<<"Enter the data: ";
    cin>>val;
    cout<<"\n";
    struct node *temp,*t;
    temp=create_node(val);
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        t = head;
        head = temp;
        head->next = t;
    }

}

















