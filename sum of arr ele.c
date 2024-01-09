/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,a[10],sum=0;
    float avg=0;
    printf("enter the numbers of ele");
    scanf("%d",&n);
    printf("enter array names");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        avg=(float)sum/n;
    }
    printf("sum=%d",sum);
    printf("avg=%f",avg);
}

    
