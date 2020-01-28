/*
 * Author's name and email: Anil Erturk, anilerturk1@gmail.com
 * Program description: Implementation and research on martingale betting system.
 *  There are two possible outcomes. 1: We win (defaultBet * roundCount * 0.5) dollars.
 *  2: We lose all the money we brought to casino.
 * Latest version: 10:11 22/02/2019. Added conditional operator to test line.
 * Older versions: 10:42 09/05/2017.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char coinToss;

int gamble(int bet)
{
	coinToss = rand() % 2;

	printf("%s\n", coinToss == 1 ? "Win" : "Lose"); // Test line

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
	int playerCredit = 10000; // Amount you start with
	int playerCreditTemp = playerCredit; // Used for profit calculation
	int bet = 10;
	int betTemp = bet;
	char gamblingResult;
	int roundCounter = 0;

	do // Gambling
	{
		gamblingResult = gamble(bet);
		playerCredit += bet * gamblingResult;

		roundCounter++;
		
		if (gamblingResult == -1)
		{
			bet *= 2;
		}
		else
		{
			bet = betTemp;
		}
	} while (roundCounter < 10000 && playerCredit > 0);

	printf("\n\n");
	printf("%s%20s%10s\n", "Gamble Counter", "Player's Credit", "Profit"); //Printing results
	printf("%14d%20d%10d", roundCounter, playerCredit, playerCredit - playerCreditTemp);

	getch();
	return 0;
}