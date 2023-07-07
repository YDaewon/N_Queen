#include "헤더.h"


int InsertQ(int **NBoard,int size, int y, int x, clock_t initial_clock)
{
	if (count == 1)
		return 0;
	if (GetExeClockTime(initial_clock) > 60)
	{
		if (over == 0)
		{
			printf("\n\n\n시간 초과!");
			over = 1;
		}
		return 0;
	}

	int L = y - x + size;
	int R = x + y;
	printf("             퀸의 갯수: %d\n\n", top + 1);

	for (int i = 0; i < y; i++)
	{
		if (x == Stack[i].x || Stack[i].y == y || L == Stack[i].Ld || R == Stack[i].Rd)
		{
			Queen temp = Pop();
			NBoard[temp.y][temp.x] = 0;
			return 0;
		}
	}
	int flag = 0;
	if (top == size - 1)
	{
		count++;
		return 0;
	}
	for (int i = 0; i < size; i++)
	{
				NBoard[y + 1][i] = 1;
				Push(y + 1, i, (y + 1 - i + size), (y + i + 1));
				InsertQ(NBoard, size, y + 1, i, initial_clock);
				if (i == size - 1)
				{
					Queen temp = Pop();
					NBoard[temp.y][temp.x] = 0;
				}
			
	}
}