#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long test(long number);

int main()
{
    char c[25];
    fgets(c, 25, stdin);
    for(int m=atoi(c); m>0; m--)
    {
        fgets(c, 25, stdin);
        printf("%ld\n", test(atol(c)));
    }
}

long test(long N)
{
   long B, C = 1;
   for(int i = log2(N); i>1; i--)
   {
        B = pow(N, (1.0/i));
        if (C >= B) continue;
        long R = 0;
        for(int q = 0; q<=i; q++)
        { 
            R *= B;
            R += 1;
        }
        if (R == N) return B;
        C = B;
   }
    return N-1;
}
