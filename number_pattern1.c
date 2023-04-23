/*C PROGRAM TO PRINT THE FOLLOWING NUMBER PATTERN
1
1 2
1 2 3
1 2 3 4   AND SO ON ..........*/

#include<stdio.h>
int main()
{
    int i , j , n;

    printf("Enter the value of n\n");
    scanf("%d", &n);

    printf("The number pattern is as follows\n");
    for(i = 1 ; i <= n ; i++)
    {
        for(j  = 1 ; j <= i ; j++)
            printf("%d ",j);

        printf("\n");
    } 
    

    return 0;
}