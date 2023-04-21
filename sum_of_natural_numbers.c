//C PROGRAM TO CALCULATE SUM OF FIRST N NATURAL NUMBERS

#include<stdio.h>
int main()
{
    int i = 0,n,sum = 0;

    printf("Enter the n value\n");
    scanf("%d",&n);

    while(i <= n)
    {
        sum = sum + i;
        i++;
    }

    printf("Sum of first %d natural numbers using while loop is %d\n",n,sum);

    sum = 0;
    for(i = 1 ; i <= n ;i++)
        sum = sum + i;
    printf("Sum of first %d natural numbers using for loop is %d\n",n,sum);

    return 0;
}