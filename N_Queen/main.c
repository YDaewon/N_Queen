#include "헤더.h"

int main(void)
{
	int flag = 0;
	int size = 0;
	int **NBoard;
	while (1)
	{
		system("cls");
		printf("-----------------------------------\n\n\n");
		printf("          N-Queen Problem\n\n\n\n\n");
		printf("1. 시작하기\n0. 종료\n=>");
		scanf("%d", &flag);

		if(flag == 1)
		{
			system("cls");
			printf("체스판의 크기를 설정해주세요.\n=>");
			scanf("%d", &size);
			clock_t initial_clock = clock();
			NBoard = malloc(sizeof(int *) * size);
			for (int i = 0; i < size; i++)
			{
				NBoard[i] = malloc(sizeof(int) * size);
			}
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					NBoard[i][j] = 0;
				}
			}

			Init(NBoard, size);
			for (int i = 0; i < size; i++)
			{
				NBoard[0][i] = 1;
				Push(0, i, size - i, i);
				InsertQ(NBoard, size, 0, i, initial_clock);
			}
			//system("cls");
			if (over == 0)
			{
				for (int i = 0; i < size;i++)
					printf("%d, ", (Stack[i].x +1));
			}
			printf("\n%f", GetExeClockTime(initial_clock));
			system("PAUSE");
		}
		else if(flag == 0)
		{

			printf("프로그램을 종료합니다...");
			break;
		}
	}
}