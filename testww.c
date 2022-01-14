/*section 12
Name-Anjali kumari
Roll no.21CY10005
Assignment no.4c
Description:program to print a diamond like structure having dimension (2N+1/2N+1)
*/
#include<stdio.h>
int main()
{
  int number, n, i, k, count = 1;

    printf("Enter number n\n");
    scanf("%d", &n);
    number = (2 * n + 1);
    count = number - 1;
    for (k = 1; k <= number; k++)
    {
        for (i = 1; i <= count; i++)
            printf(".");
        count--;
        // for each loop.
        for (i = 1; i <= 2 * k - 1; i++)
            printf("*");
        for (i = 0; i <= count; i++)
            printf(".");
        printf("\n");
    }
    count = 1;
    // Display the remaining characters in reverse order
    for (k = 1; k <= number - 1; k++)
    {
        for (i = 1; i <= count; i++)
            printf(".");
        count++;
        for (i = 1; i <= 2 * (number - k) - 1; i++)
            printf("*");
        for (i = 2; i <= count; i++)
            printf(".");
        printf("\n");
    }

    return 0;
}

