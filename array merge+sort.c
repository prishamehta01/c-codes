/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
   int n1,n2,i,j,m;
   int a1[10],a2[10],merge[30];
   printf("enter size of 1st array");
   scanf("%d",&n1);
   printf("enter ele of 1st array");
   for(i=0;i<n1;i++)
   {
       scanf("%d",&a1[i]);
   }
   printf("enter size of 2nd array");
   scanf("%d",&n2);
   printf("enter ele of 2nd array");
   for(i=0;i<n2;i++)
   {
       scanf("%d",&a2[i]);
   }
   m=n1+n2;
   for(i=0;i<n1;i++)
   merge[i]=a1[i];
   
   for(i=0;i<n2;i++)
   merge[i+n1]=a2[i];
   
   printf("array after merging");
   for(i=0;i<m;i++){
       printf("%d\t",merge[i]);
       }
       printf("array after sort");
       for(i=0;i<m;i++)
       {
           int temp;
           for(int j=i+1;j<m;j++){
               if(merge[i]>merge[j])
               {
                   temp=merge[i];
                   merge[i]=merge[j];
                   merge[j]=temp;
               }
           }
       }
       for(i=0;i<m;i++){
           printf("%d\t",merge[i]);
       }
}
   
   