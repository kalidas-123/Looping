//C PROGRAM TO CALCULATE LCM AND GCD OF TWO NUMBERS

#include<stdio.h>
int main()
{
    int m,n,t1,t2,lcm,gcd,rem;

    printf("Enter two numbers\n");
    scanf("%d%d",&m,&n);

    t1 = m;
    t2 = n;

    while(n != 0)
    {
        rem = m %n;
        m = n;
        n = rem;
    }

    gcd = m;
    lcm = (t1 * t2) / gcd;

    printf("LCM of %d and %d is %d\n",t1,t2,lcm);
    printf("GCD of %d and %d is %d\n",t1,t2,gcd);

    return 0; 
}