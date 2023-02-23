// The program to check whether an integer input is negative, positive or zero.
// Author: my_stupid_keyboard
// Date: Feb 23, 2022

#include <stdio.h>
#include <conio.h>

int main()
{
    int num1;

    printf("A program to check whether an integer input is negative, positive or zero.\n");

    printf("Enter a number : ");
    scanf("%d", &num1);

    if (num1 > 0)
        printf("%d is positive.\n", num1);

    else if (num1 < 0)
        printf("%d is negative.\n", num1);

    else
        printf("%d is zero.\n", num1);

    printf("Press any key to exit the program.");
    getch();
}