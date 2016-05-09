#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int chosen = 0;
	int guess  = 3;
	int try    = 0;
	int limit  = 20;
	
	srand(time(NULL));
	chosen = 1 + rand() % limit;
	
	printf("\nThis is a guessing game. \nTry to guess the number "
	"I have picked from 1 to 20.");
	
	for( ;guess > 0; guess--)
	{
		printf("\nYou have %d guess%s.\n", guess, guess == 1 ?
		"" : "es");
		printf("\nPick a number: ");
		scanf(" %d", &try);
		
		if(try == chosen)
		{		
			printf("\nCongratulations, you won!");
			return 0;
		}	
		else if(try < 1 || try > 20)
		{
			printf("\nI said 1 to 20!");
		}
		else
			printf("\n%d is wrong number, my number is %s than that.\n", 
		 try, try < chosen ? "greater" : (try > chosen ? "lesser" : ""));
		 		
	}
	printf("You had three guesses and failed. the number was %d.", 
	chosen);
	return 0;
}
