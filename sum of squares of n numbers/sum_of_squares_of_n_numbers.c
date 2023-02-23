// A program to find the sum of squares of numbers upto nth term
// Author: my_stupid_keyboard
// Date: Feb 23rd, 2023

#include <stdio.h>
#include <conio.h>

int main()
{
    int nth, index, ans = 0;

    // only ans has been initialized with 0
    // it's a better practice to use meaningful variable names as opposed to using a, b, c etc.

    printf("A program to find the sum of squares of numbers upto nth term\n");

    // take user input
    printf("Enter the nth term : ");
    scanf("%d", &nth);

    for (index = 0; index <= nth; index++) // <= nth because we need to print the square of nth term as well
    {
        ans += index * index; // works the same as ans = ans + (index * index)
    }

    printf("The sum of squares of numbers upto %d is %d.", nth, ans);

    getch();
    // coz we've included <conio.h> otherwise we'd have to return 0
}