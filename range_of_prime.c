//C PROGRAM TO PRINT THE RANGE OF PRIME NUMBERS

#include<stdio.h>
int main()
{
    int m , n , i , j , rem , flag ;

    printf("Enter the range\n");
    scanf("%d%d" , &m , &n);

    if(m == 1)
        m++;
    
    printf("The prime numbers are as follows\n");
    for(i = m ; i <= n ; i++)
    {
        flag = 0;
        for(j = 2 ; j <= i / 2 ; j++)
        {
            rem = i % j ;
            if(rem == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("%d  ",i);
    }

    return 0;
}