// A program to find the factorial of nth term
// Author: my_stupid_keyboard
// Date: Feb 23rd, 2023

#include <stdio.h>
#include <conio.h>

// iterative solution. this can also be solved recursively.
int main()
{
    int nth, index, ans = 1;
    printf("A program to find the factorial of nth term.\n");

    printf("Enter the nth term : ");
    scanf("%d", &nth);

    for (index = 1; index <= nth; index++)
    {
        ans *= index;
    }

    printf("The factorial %d is %d", nth, ans);

    getch();
    // getch() prevents the console from closing as soon as the output is displayed.
    // getch() cannot be used without including <conio.h>
}