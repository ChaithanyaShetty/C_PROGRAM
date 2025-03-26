/*2) implement the following game in C so that computer always wins :
  Game is played between the computer and a single user. There are 21 match sticks, computer and user is allowed to take less than 5 sticks on each turn.The player who is forced to pick up the last stick is the loser.*/

#include <stdio.h>

int main() 
{
	int user;
	int computer = 0;
	int sticks = 21;
	printf("User and Computer going to start the game:");

	while (sticks > 1) 
	{
		printf("\nUser Taking sticks: ");
		scanf("%d", &user);

		if (user < 1 || user > 4 || user > sticks) 
		{
			printf("Invalid move! You can only pick between 1 and 4 sticks, and not more than available.\n");
			continue;
		}

		sticks -= user;
		printf("\nUser selected %d sticks and %d sticks left", user, sticks);

		if (sticks == 1) 
		{
			printf("\nComputer left 1 stick for the user. User loses!");
			break;
		}

		printf("\nComputer Taking sticks: ");
		if (user > 0 && user < 5) 
		{
			switch (user) 
			{
				case 4: computer = 1; break;
				case 3: computer = 2; break;
				case 2: computer = 3; break;
				case 1: computer = 4; break;
			}
			sticks -= computer;
			printf("\nComputer selected %d sticks and %d sticks are left", computer, sticks);
		}

		if (sticks == 1) 
		{
			printf("\nComputer left 1 stick for the user. User loses!");
			break;
		}
	}

	return 0;
}

