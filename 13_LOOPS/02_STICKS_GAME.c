/*2) implement the following game in C so that computer always wins :
Game is played between the computer and a single user. There are 21 match sticks, computer and user is allowed to take less than 5 sticks on each turn.The player who is forced to pick up the last stick is the loser.*/

#include <stdio.h>

int main() {
	int user, computer, sticks = 21;

	printf("User and Computer are starting the game:\n");

	while (sticks > 1) 
	{
		// User's Turn
		printf("\nUser, pick 1 to 4 sticks: ");
		scanf("%d", &user);

		// Validate User Input
		if (user < 1 || user > 4 || user > sticks) 
		{
			printf("Invalid move! You can only pick between 1 and 4 sticks, and not more than available.\n");
			continue;
		}

		sticks -= user;
		printf("\nUser selected %d sticks, %d sticks left", user, sticks);

		// Check if user lost
		if (sticks == 1) 
		{
			printf("\nOnly 1 stick left, user has to pick it. You lose!\n");
			break;
		}

		// Computer's Turn (Ensures the user loses)
		if (sticks >= 5) 
		{
			computer = 5 - user;
		} 
		else 
		{
			computer = sticks - 1;  // If less than 5 sticks are left, take enough to leave 1 for the user
		}

		sticks -= computer;
		printf("\nComputer selected %d sticks, %d sticks are left", computer, sticks);

		// Check if computer lost (should never happen)
		if (sticks == 1)
		{
			printf("\nComputer left 1 stick for the user. User loses!\n");
			break;
		}
	}

	return 0;
}

