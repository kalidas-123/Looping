//C PROGRAM TO CALCULATE THE SUM OF FIRST N COSX SERIES 
//cosx = 1 - x^2/2! + x^4/4! - x^6/6!+.....

#include<stdio.h>
#include<math.h>
int main()
{
    int i , n ;
    float x , term , cosx;

    printf("Enter the value of x and n\n");
    scanf("%f%d", &x , &n);

    x = (x * 3.14) / 180 ; 
    printf("Cosx value is %f\n",cos(x));

    term = x;
    cosx = 0;
    for(i = 1 ; i <= n ; i++)
    {
        cosx = cosx + term ;
        term = ((-1) * term * x * x) / (2 * i * (2 * i +1));
    }

    printf("Cosx value using formula %f\n",cosx);

    return 0;

}