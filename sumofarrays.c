/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void accept(int a[10],int n)
{
    int i;
    printf("Enter the elements ");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
}
void display(int b[10],int n)
{
    int i;
    printf("The elements are:");
    for(i=0;i<n;i++)
       printf("%d\t",b[i]);
    }
void add(int a[10],int b[10],int c[10],int n)
{
    int i;
    for(i=0;i<n;i++)
       c[i]=a[i]+b[i];
       
}
int main() {
    int a[10],b[10],c[10],n;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    accept(a,n);
    accept(b,n);
    add(a,b,c,n);
    display(c,n);
    

    return 0;
}