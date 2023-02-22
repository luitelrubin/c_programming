// Program that prints the greatest among the three numbers input by a user
// Author: my_stupid_keyborad
// Date: Feb 22, 2023

#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, num3;
    printf("Program to output the greatest among three numbers input by a user.\n");

    // take three numbers as inputs
    printf("Enter three numbers below: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // compare to find the greatest among them and print the output
    if (num1 >= num2 && num1 >= num3)
        printf("The greatest number is %d.", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("The greatest number is %d.", num2);
    else
        printf("The greatest number is %d.", num3);

    getch();
}
