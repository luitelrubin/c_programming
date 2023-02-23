// A program to swap the values of two integer variables
// Author: my_stupid_keyboard
// Date: Feb 23rd, 2023

#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, temp;

    printf("A program to swap the values of two integer variables.\n");

    printf("Enter a value for num1 : ");
    scanf("%d", &num1);
    printf("Enter a value for num2 : ");
    scanf("%d", &num2);

    printf("Before swapping, the values of Num1 and Num2 are %d and %d respectively.\n", num1, num2);

    temp = num1; // temp has been used to hold the value of num1 temporarily
    num1 = num2;
    num2 = temp;

    printf("After swapping, the values of Num1 and Num2 are %d and %d respectively.\n", num1, num2);
    printf("Press any key to exit the program.\n");
    getch();
}
