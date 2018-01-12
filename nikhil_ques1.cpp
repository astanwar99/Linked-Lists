/*
Nikhil Chauhan
17BCE0610

Question 1:
Q1. Create a stack and write a code to reverse the elements of a stack
using only stack operations (push and pop).

*/


#include<iostream>

using namespace std;

//Stack declaration
struct stack
{
    int a[20];
    int top;
}st;

//Push function definition
void push(int val)
{
    if (st.top==19)
    {
        cout<<"\nStack overflow\n";
    }
    else
    {
        st.a[++st.top]=val;
    }
}

//Pop function definition
int pop()
{
    if(st.top>=0)
        return st.a[st.top--];
    else
        return 0;
}

//Reverse function for reversing the stack

void reverse_stack()
{
    int temp[20],i,counter=0;        //temp is a temporary array to store stack data
    for(i=st.top;i>=0;i--)           //for loop for moving data from stack to temp
    {
        temp[i]=pop();
        counter++;
    }
    for(i=counter-1;i>=0;i--)        //for loop for moving data from temp to stack
    {                                //but in reverse order.
        push(temp[i]);
    }


}

//Display function for displaying stack content
void display()
{
    cout<<"\ntop->"<<st.a[st.top]<<"\n";
    for(int i=st.top-1;i>=0;i--)
    {
        cout<<"     "<<st.a[i]<<"\n";
    }
}

//Main function-optimized for menu driven program
int main()
{
    st.top=-1;
    int choice,num,x; //x is a temporary variable for storing popped data.
    cout<<"================================\n"
        <<"Choose an option.\n"
        <<"1.Push element\n"
        <<"2.Pop element\n"
        <<"3.Reverse stack\n"
        <<"4.Display Stack\n"
        <<"5.Exit\n"
        <<"================================\n";
    do
    {
        cout<<"Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"\nEnter element:";
            cin>>num;
            push(num);
            break;
        case 2:
            x=pop();
            cout<<x<<" popped\n";
            break;
        case 3:
            reverse_stack();
            break;
        case 4:
            display();
            break;
        case 5:
            break;
        default:
            cout<<"\nWrong choice";

        }
    }while(choice!=5);
    return 0;

}
