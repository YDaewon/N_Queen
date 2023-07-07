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

int InsertQ(int **NBoard, int size, int y, int x, clock_t initial_clock); // 체스판에 퀸을 삽입해주는 함수 

void Init(int ** NBoard, int size); //모든 동작이 끝난 뒤, 동적 할당과 변수를 초기화 해주는 함수




void InitStack();

int IsEmpty();

void Push(int x, int y, int Ld, int Rd);

Queen Pop();

double GetExeClockTime(clock_t initial_clock);