//C PROGRAM TO PRINT SUM OF SQUARE OF FIRST N NATURAL NUMBERS

#include<stdio.h>
int main()
{
    int n,i,sum = 0;

    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(i = 1 ; i <= n ; i++)
        sum = sum + i * i;

    printf("Sum of square of first %d natural numbers is %d\n",n,sum);

    return 0;
}