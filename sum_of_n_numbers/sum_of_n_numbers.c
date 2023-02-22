// program to find the sum of n numbers
// Author: my_stupid_keyboard
// Date: Feb 22, 2023

#include <stdio.h>
#include <conio.h>

int main()
{
    int n = 0, sum = 0;

    printf("Program to find the sum of n numbers.\n");

    printf("Enter a value for n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    printf("The sum of numbers upto %d is %d", n, sum);

    getch();
}

// works as expected!