//C PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS PRIME OR NOT

#include<stdio.h>
int main()
{
    int i , num , rem , flag = 0;

    printf("Enter the number\n");
    scanf("%d" , &num);

    i = 2;
    while(i <= num / 2)
    {
        rem = num % i;
        i++;
        if(rem == 0)
        {
            flag =1;
            break;
        }
    }

    if(flag == 0)
        printf("The number %d is prime\n",num);
    else
        printf("The number %d is not a prime\n",num);

    return 0; 
}