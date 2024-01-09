/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int n,i=0;
printf("enter a num");
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
    if(n%i==0)
    {
        printf("composite");
    }
    else{
        printf("prime");
    }
    }
}