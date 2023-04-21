//C PROGRAM TO CALCULATE FACTORIAL OF A NUMBER

#include<stdio.h>
int main()
{
    int num,fact,temp;

    printf("Enter a number\n");
    scanf("%d",&num);

    temp = num;
    fact = 1;
    while(num != 0)
    {
        fact = fact * num;
        num--;
    }

    printf("Factorial of %d is %d\n",temp,fact);

    return 0;
}