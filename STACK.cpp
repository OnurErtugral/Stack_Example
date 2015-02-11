#include "STACK.h"
#include <iostream>
using namespace std;

STACK::STACK(void) //constructor 
{
	top=0;
}

bool STACK::isEmpty()
{
	return top==0;
}

bool STACK::isFull()
{
	return top==limit;
}

bool STACK::push(ITEM &item)
{
	if(top<limit)
	{
		items[top++]=item;
		return true;
	}
	else
		return false;
}

bool STACK::pop(ITEM &item)
{
	if(top>0)
	{
		item=items[--top];
		return true;
	}
	else
		return false;
}
STACK::~STACK(void)//deconstructor 

{
}
