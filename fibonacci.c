/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,fib0=0,fib1=1,nextfib;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci series:\n");
    printf("0\t1");
    nextfib=fib0+fib1;
    printf("\t%d\t",nextfib);
    while(nextfib<n)
    {
        fib0=fib1;
        fib1=nextfib;
        nextfib=fib0+fib1;
        printf("%d\t",nextfib);
    }

    return 0;
}
