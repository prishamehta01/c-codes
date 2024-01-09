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
void concat(int a[10],int b[10],int c[10],int m,int n)
{
    int i,j=0;
    for(i=0;i<m;i++,j++)
       c[j]=a[i];
    for(i=0;i<n;i++,j++)
       c[j]=b[i];
       
}
int main() {
    int a[10],b[10],c[10],m,n;
    printf("Enter the number of array 1 ");
    scanf("%d",&m);
    printf("Enter the number of array 2 ");
    scanf("%d",&n);
    accept(a,m);
    accept(b,n);
    concat(a,b,c,m,n);
    display(c,m+n);
    

    return 0;
}

