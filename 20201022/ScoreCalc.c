// Copyright © 2020 CSJ From SJ Project.All rights reserved.
// Keep your hand shining plz

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double input, result = 0;

int calc()
{
    result = (sqrt(input)) * 10;
}
int main()
{
    system("color 0a");
    system("mode 60, 10");
    printf("Please input a number to calculation it's root's 10 times :\n");
    scanf("%lf", &input);
    calc();
    printf("The answer of %.0f's root's 10 times is %.2f\n===Please enter any key to continue.===", input, result);
    system("pause > nul");
}