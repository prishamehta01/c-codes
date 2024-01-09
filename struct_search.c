/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp{
    char name[20];
    int id;
};
typedef struct emp E;
void accept(E e1[20],int n)
{
    int i;
    printf("Enter employee details:");
    for(i=0;i<n;i++)
        scanf("%s %d",e1[i].name,&e1[i].id);
        
}
void search_name(E e1[20],int n)
{
    int i, flag=0;
    char name[20];
   
    printf("Enter the name of employee to be searched:");
    scanf("%s",name);
    for(i=0;i<n;i++)
    {
        if(strcmp(e1[i].name,name)==0)
        {
            printf("Employee found details are %s %d",e1[i].name,e1[i].id);
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Employee doesnt exist");
}
void search_id(E e1[20],int n)
{
    int i,id,flag=0;
    printf("Enter the id to be searched:");
    scanf("%d",&id);
    for(i=0;i<n;i++)
        if(e1[i].id==id)
        {
            printf("Employee exists--\n details are %s %d",e1[i].name,e1[i].id);
            flag=1;
            break;
        }
    if(flag==0)
        printf("Employee doesnt exist");
    
}
void display(E e1[20], int n)
{
    int i;
    printf("Employee details are:");
    for(i=0;i<n;i++)
    {
        printf("%s %d",e1[i].name,e1[i].id);
    }
}
int main()
{
    int n,ch=0;
    E e1[20];
    for(;;)
    {
        printf("\nEnter\n 1.Accept the employee structure: \n 2.Search employee based on name:\n 3.Search employee based on id:\n 4.Display employee details: \n 5.enter any other key to exit:\n ");
        scanf("%d",&ch);
        switch(ch)   
        {
            case 1:
            printf("Enter the number of employees:");
            scanf("%d",&n);
            accept(e1,n);
            break;
            case 2:
            printf("searching employee on name entered--");
            search_name(e1,n);
            break;
            case 3:
            printf("searching employee on id--");
            search_id(e1,n);
            break;
            case 4:
            display(e1,n);
            break;
            default:
            exit(0);
        }
       
    
}
}
