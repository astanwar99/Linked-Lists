/*
Nikhil Chauhan
17BCE0610

Q3. Implement two stacks in a single array
*/

#include<iostream>
#include<string>
using namespace std;

struct stack
{
    int x[40];
    int top1,top2;
}st;

void push1()
{
    int ele;
    if (st.top1==19)
    cout<<"\nStack 1 overflow";
    else
    {
        cout<<"\nEnter data:";
        cin>>ele;
        st.x[++st.top1]=ele;
    }
}

void push2()
{
    int ele;
    if (st.top2==39)
    cout<<"\nStack 2 overflow";
    else
    {
        cout<<"\nEnter data:";
        cin>>ele;
        st.x[++st.top2]=ele;
    }
}

void pop1()
{
    if(st.top1==-1)
    cout<<"\nStack underflow";
    else
    {
        cout<<"\nDeleted item from stack 1: "<<st.x[st.top1];
        st.top1--;
    }
    cout<<"\n";
}

void pop2()
{
    if(st.top2==19)
    cout<<"\nStack underflow";
    else
    {
        cout<<"\nDeleted item from stack 1: "<<st.x[st.top2];
        st.top2--;
    }
    cout<<"\n";
}

void display()
{
    cout<<"\ntop->"<<st.x[st.top1]<<"\n";
    for(int i=st.top1-1;i>=0;i--)
    {
        cout<<"     "<<st.x[i]<<"\n";
    }
    cout<<"\ntop->"<<st.x[st.top2]<<"\n";
    for(int i=st.top2-1;i>=20;i--)
    {
        cout<<"     "<<st.x[i]<<"\n";
    }
}

int main()
{
    st.top1=-1;
    st.top2=19;
    int choice,num;
    cout<<"======================\n"
        <<"1.Push in stack 1\n"
        <<"2.Push in stack 2\n"
        <<"3.Pop from stack 1\n"
        <<"4.POp from stack 2\n"
        <<"5.Display stack\n"
        <<"6.Exit\n"
        <<"======================\n";
    do
    {
        cout<<"Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            push1();
            break;
        case 2:
            push2();
            break;
        case 3:
            pop1();
            break;
        case 4:
            pop2();
            break;
        case 5:
            display();
            break;
        case 6:
            break;
        default:
            cout<<"\nWrong choice\n";
        }
    }while(choice!=6);
    return 0;
}
