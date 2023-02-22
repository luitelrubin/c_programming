// Program to check whether an integer input is even or odd.
// Author: my_stupid_keyboard
// Date: Feb 22, 2023

#include <stdio.h>
#include <conio.h>

int main()
{
    int num1;

    printf("Program to check whether an integer input is even or odd.\n");

    printf("Enter a number: ");
    scanf("%d", &num1);

    if (num1 % 2 == 0)
        printf("The number is even.");
    else
        printf("The number is odd.");

    getch();
}
