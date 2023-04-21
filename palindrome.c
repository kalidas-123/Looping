//C PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS PALINDROME OR NOT

#include<stdio.h>
int main()
{
    int num,temp,reversed = 0,digit;

    printf("Enter a number\n");
    scanf("%d",&num);

    temp = num;
    while(num != 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num /10;
    }

    if(temp == reversed)
        printf("The given number is palindrome\n");
    else
        printf("The given number is not a palindrome\n");

    return 0;  
}