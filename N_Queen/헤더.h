#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

typedef struct Queen {
	int x, y;
	int Ld;
	int Rd;
}Queen;

Queen Stack[1000];


int top;
int count;
int over;

int InsertQ(int **NBoard, int size, int y, int x, clock_t initial_clock); // ü���ǿ� ���� �������ִ� �Լ� 

void Init(int ** NBoard, int size); //��� ������ ���� ��, ���� �Ҵ�� ������ �ʱ�ȭ ���ִ� �Լ�




void InitStack();

int IsEmpty();

void Push(int x, int y, int Ld, int Rd);

Queen Pop();

double GetExeClockTime(clock_t initial_clock);