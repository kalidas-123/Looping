//C PROGRAM TO PRINT N FIBONACCI SERIES 

#include<stdio.h>
int main()
{
    int i,n,fib1 = 1,fib2 = 1,fib3;

    printf("Enter the n value\n");
    scanf("%d",&n);

    printf("The %d Fibonacci numbers are\n",n);
    for(i = 1 ; i <= n ; i++)
    {
        fib3 = fib1 +fib2;
        printf("%d\n",fib3);
        fib1 = fib2;
        fib2 = fib3;
    }

    return 0;
}