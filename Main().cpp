#include <iostream>
#include "STACK.h"
#include <cctype>

using namespace std;
int main()
{
	STACK st;
	char ch;
	int po;
	cout<<"Enter A to add number,\nP to process a PO,or Q to quit.";
	cin>>ch;
	while( toupper(ch)!='Q' )
	{
		while(cin.get()!='\n')
			continue;
		if(!isalpha(ch))
			cout<<"\a";
		switch(ch)
		{
		case 'A':
		case 'a':
				cout<<"Enter a PO number to add:";
				cin>>po;
				if(st.isFull())
					cout<<"Stack is full!\n";
				else
				{
					st.push(po);
					cout<<po<<" is added.\n";
				}
				break;
		case 'P':
		case 'p':
				if(st.isEmpty())
					cout<<"Stack is already empty!\n";
				else
				{
					st.pop(po);
					cout<<"PO #"<<po<<"popped\n";
				}
				break;
		}
		cout<<"Enter A to add number,\nP to process a PO,or Q to quit.";
		cin>>ch ;
	}
	cout<<"Bye..\n";
	
	return 0;
}
