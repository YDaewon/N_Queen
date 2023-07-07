#include "Çì´õ.h"

void InitStack()
{
	top = -1;
}

int IsEmpty()
{
	return top == -1;
}

void Push(int y, int x, int Ld, int Rd)
{
	top++;
	Stack[top].x = x;
	Stack[top].y = y;
	Stack[top].Ld = Ld;
	Stack[top].Rd = Rd;
}

Queen Pop()
{
	if (IsEmpty())
	{
		return Stack[49];
	}
	Queen temp = Stack[top];
	top--;
	return temp;
}
