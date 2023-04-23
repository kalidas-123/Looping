//C PROGRAM TO FIND THE SUM OF FIRST N SINX SERIES
//sinx = x - x^3/3! + x^5/5! - x^7/7! + .....

#include<stdio.h>
#include<math.h>
int main()
{
    int n , i;
    float x , term , sinx;

    printf("Enter the value of x and n\n");
    scanf("%f%d" , &x ,&n );

    x = ( x *3.14 ) / 180;
    printf("Sinx value is %f\n",sin(x));

    term = x;
    sinx = 0;

    for( i = 1 ; i <= n ; i += 2)
    {
        sinx = sinx + term;
        term = ((- 1) * term * x * x) / (2 * i *(2 * i + 1));
    }

    printf("Sinx value using formula is %f\n",sinx);

    return 0;
}