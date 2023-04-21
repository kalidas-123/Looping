//C PROGRAM TO PRINT MULTIPLICATION TABLES 

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter n value\n");
    scanf("%d",&n);

    printf("Multiplication Tables from 1 to %d are\n",n);
    for(i = 1 ; i <= 10 ;i++)
    {
        for(j = 1 ; j <= n ; j++)
            printf("%4d", i * j);
        
        printf("\n");
    }

    return 0;
}