// Copyright © 2020 CSJ From SJ Project.All rights reserved.
// Keep your hand shining plz

#include <stdio.h>
#include <stdlib.h>

int target, counter, result = 1;

int calc()
{
	for (counter = 1; counter <= target; counter++)
	{
		result = result * counter;
	}
}

int main()
{
	system("color 0a");
	system("mode 55, 10");
	printf("Please input a number to calculation it's factorial :\n");
	scanf("%d", &target);
	calc();
	printf("The answer of %d's fatorial is %d!\n===Please enter any key to continue.===", target, result);
	system("pause > nul");
}