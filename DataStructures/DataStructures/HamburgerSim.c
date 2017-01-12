#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "CircularQueue.h"

#define CUS_COME_TERM 15

enum BUR
{
	CHE_BUR = 0, BUL_BUR = 1, DUB_BUR = 2
};

enum TERM
{
	CHE_TERM = 12, BUL_TERM = 15, DUB_TERM = 15
};

int main(void)
{
	int makeProc = 0;
	int cheOrder = 0, bulOrder = 0, dubOrder = 0;
	int sec;

	Queue que;

	QueueInit(&que);
	srand(time(NULL));

	for (sec = 0; sec < 3600; sec++)
	{
		if (sec % CUS_COME_TERM == 0) //고객 주문 받는 시간
		{
			switch (rand() % 3) //고객 주문 랜덤하게 선택
			{
			case CHE_BUR:
				Enqueue(&que, CHE_TERM); //대기열 추가
				cheOrder += 1;
				break;

			case BUL_BUR:
				Enqueue(&que, BUL_TERM);
				bulOrder += 1;
				break;

			case DUB_BUR:
				Enqueue(&que, DUB_TERM);
				dubOrder += 1;
				break;
			}
		}

		if (makeProc <= 0 && !QIsEmpty(&que))
			makeProc = Dequeue(&que);

		makeProc--; //매 초마다 제작중...
	}

		printf("Simulation Report\n");
		printf(" - Cheese burger: %d\n", cheOrder);
		printf(" - Bulgogi burger: %d\n", bulOrder);
		printf(" - Double burger: %d\n", dubOrder);
		printf(" - Waiting room size: %d\n", QUE_LEN);
	
	return 0;
}