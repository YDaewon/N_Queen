#include "Çì´õ.h"



void Init(int ** NBoard, int size)
{
	InitStack();
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			NBoard[i][j] = 0;
		}
	}
	count = 0;
	over = 0;
}


