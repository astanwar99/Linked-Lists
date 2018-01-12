/*
Nikhil Chauhan
17BCE0610

Q4. Write a code to convert an infix expression to its equivalent revers polish expression
*/

#include<iostream>
#include<string>
#define size 20
using namespace std;

char infix[20],postfix[20];

//Structure definition for stack
struct stack
{
	int s[size];
	int top;
}st;

//Push function for stack
void push(int ele)
{
	st.top++;
	st.s[st.top]=ele;
}

/*
Pop function for stack. It also returns the character
which is popped.
Each operator has been assigned a numerical value
depending upon its precedence.
*/
char pop()
{
	int el;
	char e;
	el=st.s[st.top];
	st.top--;
	switch(el)
	{
		case 1:e='+';
				break;
		case 2:e='-';
				break;
		case 3:e='*';
				break;
		case 4:e='/';
				break;
		case 5:e='^';
				break;
	}
	return(e);
}

/*
Post function for carrying out the conversion from infix
to Reverse Polish Expression(Postfix).
*/

void post()
{
	int i,j=0;
	for(i=0;infix[i]!='\0';i++)
	{
		switch(infix[i])
		{
			case '+':
				{
					while(st.s[st.top]>=1)
						postfix[j++]=pop();
					push(1);
					break;
				}
			case '-':
				{
					while(st.s[st.top]>=1)
						postfix[j++]=pop();
					push(2);
					break;
				}
			case '*':
				{
					while(st.s[st.top]>=3)
						postfix[j++]=pop();
					push(3);
					break;
				}
			case '/':
				{
					while(st.s[st.top]>=3)
						postfix[j++]=pop();
					push(4);
					break;
				}
			case '^':
				{
					while(st.s[st.top]>=5)
						postfix[j++]=pop();
					push(5);
					break;
				}
			case '(':
				{
					push(0);
					break;
				}
			case ')':
				{
					while(st.s[st.top]!=0)
						postfix[j++]=pop();
					st.top--;
					break;
				}
			default :postfix[j++]=infix[i];
		}
	}
	while(st.top>0)     //For moving left out operators from stack to postfix array.
	postfix[j++]=pop();
	cout<<"\nThe postfix expression is: ";
	cout<<postfix;
	cout<<"\n";
}

int main()
{
	st.top=0;
    cout<<"\nEnter the expression: ";
    cin>>infix;
    cout<<"Evaluating using Reverse Polish notation:\n";
    post();
    return 0;
}
