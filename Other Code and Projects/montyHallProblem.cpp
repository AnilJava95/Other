/*
 * Author's name and email: Michael
 * Program description: A program about the monthy hall problem. When we
 *  dont switch the door, we get 33.3% win rate. When we switch we have a
 *  66.6% win rate.
 *   This is because initially you have a 33% change of picking the right
 *  door. So if you stick with your door you will get 33% win rate. Initially
 *  you have a 66% change of not picking the right door. So the other two doors
 *  have the money behind one of them 66% of the time.
 * Latest version: 7:52 PM, 1/27/2020.
 * Older versions:
 */

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

int main()
{
	//std::vector<int> doors = { 0, 0, 0 };
	srand(time(NULL));
	int winCount = 0;
	int loseCount = 0;
	int roundCount = 1000000;

	for (int currentRound = 1; currentRound <= roundCount; currentRound++)
	{
		int doorToSwitchTo = 0;

		//std::cout << currentRound << ". round: ";

		// Choosing index of the door to put the money behind.
		int indexToMoney = rand() % 3;
		// Put the million dollar behind one of the doors
		//doors[indexToMoney] = 1;

		// Player chooses a door index.
		int playerChoice = rand() % 3;

		// Host opens one of the doors that you didnt pick
		//  which doesnt contain the money. Host also decides 
		//  which door you will switch to.
		for (int i = 0; i < 3; i++)
		{
			if (i == playerChoice)
				continue;
			if (i == indexToMoney)
			{
				doorToSwitchTo = i;
				break;
			}
			if (i == 2)
				doorToSwitchTo = i;
		}

		/*
		// Player doesnt switch.
		if (playerChoice == indexToMoney)
			winCount++;
		else
			loseCount++;
		*/


		// Player switches
		if (doorToSwitchTo == indexToMoney)
			winCount++;
		else
			loseCount++;


		//doors[indexToMoney] = 0; // reset the money
	}

	std::cout << "\nRound count: " << roundCount
		<< " Win count: " << winCount
		<< " Lose count: " << loseCount
		<< " Win rate: " << 1.0 * winCount / roundCount * 100 << "%\n";

}
