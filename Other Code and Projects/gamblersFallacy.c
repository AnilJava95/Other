/*
 * Author's name and email: Michael, michaeljava95@gmail.com
 * Program description: Testing gambler's fallacy. Gambler's fallacy
 *  is the thought that probability of a win is higher after the house
 *  won many rounds in a row.
 * Latest version: 1:14 AM, 5/28/2020.
 * Older versions:
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char coinToss; // This is a global variable to prevent creating and destroying it every iteration.

// Simulates a gambling game with 50% win rate.
int gamble(int bet)
{
	coinToss = rand() % 2;

	//printf("%s\n", coinToss == 1 ? "Win" : "Lose"); // Test line

	if (coinToss == 0)
		return -1; // Lost
	else
		return 1; // Won
}

int main()
{
	srand(time(NULL));
	int playerCredit = 10000; // Amount you start with
	int playerInitialCredit = playerCredit; // Used for profit calculation
	int bet = 1000;
	char gamblingResult;
	int roundCounter = 0;
	int playedRoundCounter = 0;

	int houseWinRowCounter = 0;
	float winCounter = 0.0;
	float loseCounter = 0.0;

	do // Gambling
	{
		gamblingResult = gamble(bet); // Gamble round is simulated

		// We only play if the house is in a win row
		if (houseWinRowCounter >= 7)
		{
			playerCredit += bet * gamblingResult;
			playedRoundCounter++;
			if (gamblingResult == 1)
				winCounter++;
		}

		// We observe the table to see whether house is in a win row
		if (gamblingResult == -1)
			houseWinRowCounter++;
		else
			houseWinRowCounter = 0;

		roundCounter++;

	} while (roundCounter < 1000000 && playerCredit > 0);

	// Print results
	printf("\n\n");
	printf("%s%20s%10s\n", "Gamble Counter", "Player's Credit", "Profit");
	printf("%14d%20d%10d\n", roundCounter, playerCredit, playerCredit - playerInitialCredit);
	printf("%s%d\n", "Played round counter: ", playedRoundCounter);
	printf("%s%.2f\n", "Win rate: ", winCounter / playedRoundCounter * 100);
	printf("%s%.2f\n", "Encounter probability: ", 1.0 * playedRoundCounter / roundCounter * 100);

	return 0;
}