#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
head()
{
	system("title Code By ������");
	system("color 02");
	system("mode 30, 10");
	printf("Ein\n");
	printf("Dos\n");
	printf("Trios\n");
	printf("Ne\n");
	printf("Fem\n");
	printf("Liu\n");
	printf("Execution\n");
	printf("Song By Mili\n");
	printf("Copyrighting By SJ Bots - CSJ\n");
	printf("All Rights Reserved\n");
}

main()
{
	head();
	int num1, num2, total = 0;
	printf("\nPlease input num 1:");
	scanf("%d", &num1);
	printf("\nPlease input num 2:");
	scanf("%d", &num2);
	total = num1 + num2;
	printf("\nnum 1 + num 2 = %d", total);
	getch();
}