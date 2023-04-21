//C PROGRAM TO PRINT REVERSE OF A NUMBER

#include<stdio.h>
int main()
{
    int num,digit,reversed = 0,temp;

    printf("Enter a number\n");
    scanf("%d",&num);
    temp = num;
    while(num != 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    printf("The reverse of %d is %d\n",temp,reversed);

    return 0;
}