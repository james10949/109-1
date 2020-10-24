/*
Copyright CSJ
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	system("color 0a");
	system("mode 45, 10");
	srand(time(NULL));
	int counter, min = 1, max = 50, ans = rand() % (max - min + 1) + min, guess;
	for (counter = 0; counter < 5; counter++)
	{
		system("cls");
		printf("Guess a number from %d to %d(Chance: %d of 5)\n", min, max, counter + 1);
		scanf("%d", &guess);
		if (guess == ans)
		{
			printf("Congratulations!\nYou guess the correct number!\n===Press Any Key to Continue===");
			system("pause > nul");
			break;
		}
		else if (guess > ans)
		{
			printf("This number is too far to the answer!\nMaybe you need to guess a small one.\nYou have %d chance left!\n===Press Any Key to Continue===", 4 - counter);
			max = guess;
			system("pause > nul");
		}
		else
		{
			printf("This number is too far to the answer!\nMaybe you need to guess a big one.\nYou have %d chance left!\n===Press Any Key to Continue===", 4 - counter);
			min = guess;
			system("pause > nul");
		}
	}
	if (counter == 5)
	{
		system("cls");
		printf("Failure!\nYou are out of chance!\nThe correct number is %d", ans);
		system("pause > nul");
	}
}