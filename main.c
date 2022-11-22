#include "bingoBoard.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BINGO_RES_UNFINISHED -1
#define BINGO_RES_FINISHED    0

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int check_gameEnd(void)
{
	int res = BINGO_RES_UNFINISHED;
	
	if (bingo_countCompletedLine() >= N_SIZE)
	{
		res = BINGO_RES_FINISHED;
	}
	
	return res;
}


int get_number(void)
{
	int selNum = 0;
	
	do 
	{
		printf("select a number : ");
		scanf(" %d", &selNum);
		fflush(stdin);
		
		if (selNum < 1 || selNum > N_SIZE * N_SIZE || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT)
		{
			printf("%i is not on the board! select other one.\n", selNum);
		}
	} while(selNum < 1 || selNum > N_SIZE * N_SIZE || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT);
	
	return selNum;
}
	
	
int main(int argc, char *argv[])
{
	srand((unsigned)(time(NULL)));
	
	//Opening
	printf("==================================================================\n");
	printf("******************************************************************\n\n");
	printf("                           BINGO GAME                             \n\n");
	printf("******************************************************************\n");
	printf("==================================================================\n");
	printf("\n\n\n\n\n\n");
	
	//Game
	
	bingo_init();
	
	
	while (check_gameEnd() == BINGO_RES_UNFINISHED)
	{
		bingo_print();
		
		printf("No. of completed line : %i\n", bingo_countCopletedLine());
		
		int selNum;
		selNum = get_number();
		
		bingo_inputNum(selNum);
	}
	

	
	//intitialize bingo board
	/*
	while (game is not end) // 줄수가 N_BINGO보다 작음 
	{
		//bingo board print
		
		//print No.of completed line
		
		//select a number
		
		//update the board status 
	}
	*/
	
	
	//Ending
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("==================================================================\n");
	printf("******************************************************************\n\n");
	printf("                     !!! CONGRATULATION !!!                       \n\n");
	printf("            >>  You slove this wonderful game !!!                 \n\n");
	printf("                            <YOU WIN>                             \n\n");
	printf("******************************************************************\n");
	printf("==================================================================\n");
	printf("\n\n\n\n\n\n\n");

	
	return 0;
}
