/*
 * Author's name and email: Michael, michaeljava95@gmail.com
 * Program description: Implementation and research on martingale betting system.
 *  There are two possible outcomes. 1: We win (defaultBet * roundCount * 0.5) dollars.
 *  2: We lose all the money we brought to casino.
 * Latest version: 10:11 AM, 2/22/2019. Added conditional operator to test line.
 * Older versions: 10:42 AM, 5/9/2017.
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
	int bet = 10;
	int baseBet = bet;
	char gamblingResult;
	int roundCounter = 0;

	do // Gambling
	{
		gamblingResult = gamble(bet);  // Gamble round is simulated
		playerCredit += bet * gamblingResult; // Adjust player credit

		// If we lose, we double our bet for next time. If we win, we return to base bet.
		if (gamblingResult == -1)
			bet *= 2;
		else
			bet = baseBet;

		roundCounter++;
	} while (roundCounter < 10000 && playerCredit > 0);

	// Print results
	printf("\n\n");
	printf("%s%20s%10s\n", "Gamble Counter", "Player's Credit", "Profit");
	printf("%14d%20d%10d", roundCounter, playerCredit, playerCredit - playerInitialCredit);

	return 0;
}