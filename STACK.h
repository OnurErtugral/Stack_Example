#ifndef STACK_H_
#define STACK_H_

typedef int ITEM;
const int limit=5;//limit of the stack

class STACK
{
private:
	ITEM items[limit];
	int top;

public:
	STACK(void);
	bool isEmpty();
	bool isFull();
	bool push(ITEM &item);
	bool pop(ITEM &item);
	~STACK(void);


};
#endif
