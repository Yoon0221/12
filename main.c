#include "bingoBoard.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


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
	bingo_print();
	bingo_inputNum(5);
	bingo_print();
	
	
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
