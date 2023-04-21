//C PROGRAM TO CALCULATE SUM OF DIGITS OF A NUMBER

#include<stdio.h>
int main()
{
    int num,digit,rem,temp,sum = 0;

    printf("Enter a number\n");
    scanf("%d",&num);

    temp = num;
    while(num != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum of digits of %d is %d\n",temp,sum);

    return 0;
}