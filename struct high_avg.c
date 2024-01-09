/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
typedef struct stud{
    int id;
    char sn[20];
    int stm1;
    int stm2;
}S;
void accept(S s1[10], int n)
{
    int i;
    printf("Enter the details:");
    for(i=0;i<n;i++)
        scanf("%d %s %d %d",&s1[i].id,s1[i].sn,&s1[i].stm1,&s1[i].stm2);
        
}
void display(S s1[10],int n,int flag)
{
    int i;
    printf("Student details:\n");
    for(i=0;i<n;i++)
    {
        if(flag==0)
        {
            printf("Id=%d\t Name=%s\t Marks1=%d \t Marks2=%d\n",s1[i].id,s1[i].sn,s1[i].stm1,s1[i].stm2);
        }
        else
        {
           printf("Id=%d\t Name=%s\t Marks1=%d \t Marks2=%d\t Average=%f\t  Total=%d\n",s1[i].id,s1[i].sn,s1[i].stm1,s1[i].stm2,(float)(s1[i].stm1+s1[i].stm2)/2.0,s1[i].stm1+s1[i].stm2);  
        }
    }
}
void find_tavg(S s1[10],int n)
{
  float highavg=0,avgm=0;
  int i;
  for(i=0;i<n;i++)
  {
      avgm=(s1[i].stm1+s1[i].stm2)/2.0;
      if(avgm>highavg)
        highavg=avgm;
  }
  for(i=0;i<n;i++)
  {
      if(highavg==(float)(s1[i].stm1+s1[i].stm2)/2.0)
      {
          printf("Student having the highest average is \nId=%d\t Name=%s\n",s1[i].id,s1[i].sn);
      }
  }
}
int main()
{
    S s1[20];
    int n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    accept(s1,n);
    display(s1,n,0);
    find_tavg(s1,n);
    display(s1,n,1);
}







