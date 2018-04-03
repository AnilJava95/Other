/*
 * Author's name and email: Anil Erturk, anilerturk1@gmail.com
 * Program description: Implementation and research on martingale betting system.
 * Latest version: 10:42 09/05/2017.
 * Older versions: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char coinToss;

int gamble(int bet)
{

	coinToss = rand() % 2;

	//printf("%d", coinToss); // Test line

	if (coinToss == 0)
	{
		return -1; // Lost
	}
	else
	{
		return 1; // Won
	}
}

int main(void)
{
	srand(time(NULL));
	int playerCredit = 50000; // Amount you start with
	int playerCreditTemp = playerCredit; // Used for profit calculation
	int bet = 10;
	int betTemp = bet;
	char gamblingResult;
	int gambleCounter = 0;

	do // Gambling
	{
		gamblingResult = gamble(bet);
		playerCredit += bet * gamblingResult;

		gambleCounter++;
		
		if (gamblingResult == -1)
		{
			bet *= 2;
		}
		else
		{
			bet = betTemp;
		}
	} while (gambleCounter < 10000 && playerCredit > 0);

	printf("\n\n");
	printf("%s%20s%10s\n", "Gamble Counter", "Player's Credit", "Profit"); //Printing results
	printf("%14d%20d%10d", gambleCounter, playerCredit, playerCredit - playerCreditTemp);

	getch();
	return 0;
}