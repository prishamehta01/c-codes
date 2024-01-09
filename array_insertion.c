/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[20],i,n,pos,ele;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be inserted:");
    scanf("%d",&ele);
    printf("Enter the position:");
    scanf("%d",&pos);
    for(i=n;i>=pos;i--)
        a[i]=a[i-1];
    a[pos-1]=ele;
    n=n+1;
    printf("array after insertion\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
