// A program to check whether a number entered by the user is an armstrong number or not
// Only works for values < = 9 digits because of int data type's restriction.
// Author: my_stupid_keyboard
// Date: 27th Feb, 2023

#include <stdio.h>
#include <math.h>

// from <math.h> we've used pow() and round(). I'll explain what they do later.

int main()
{
    int num;       // stores user input
    int n;         // duplicate of num
    int count = 0; // counts how many digits threre are in n

    // Step 1:
    // Prompt the user to enter a number and store it in the variable "num"

    printf("This program checks whether a number entered by user is armstrong or not.\n");
    printf("Enter a number : ");
    scanf("%d", &num);

    // Step 2:
    // Find out how many digits there are in the entered number and store it in "count" variable

    n = num; // this creates a duplicate of num

    while (n != 0)
    {
        n = n / 10;
        count = count + 1;
    }

    // Step 3:
    // run a for loop "count" times (i.e 3 times if count = 3) to extract all the digits in the entered number
    // raise the extracted digits to the power of count (i.e digit^count) and add them to the variable sum

    n = num; // re-initialize the value of n to make it equal to the user entered number
    int sum = 0;
    int rem; // to extract digits from the supplied number one by one
    int i;   // loop counter

    for (i = 1; i <= count; i++)
    {
        rem = n % 10; // rem stores the remainder after this operation
        sum += round(pow(rem, count));
        // because pow(double, double) expects us to supply values of double data type, supplying an integer to it (as we've done) may cause rounding errors
        // so we use round() function to adjust whatever comes out of pow(rem, count) to the nearest integer
        n = n / 10;
    }

    // Step 4:
    // check if the sum of powers we've calculated is equal to the number user entered in the beginning.
    // if it's equal print "armstrong", otherwise print "not armstrong".

    if (sum == num) // we needed the value of num to be unaltered because of this step
        printf("%d is an armstrong number.", num);
    else
        printf("%d is not an armstrong number.", num);

    return 0;
}
