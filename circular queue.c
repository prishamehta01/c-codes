/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define max 3 
void insert_CQ(int CQ[max], int *rear, int *count)
{
    int ele;
    printf("Enter the element to be inserted:");
    scanf("%d",&ele);
    if(*count==max)
    {
        printf("Insertion is not possible\n");
        return;
    }
    *rear=((*rear)+1) % max;
    CQ[*rear]=ele;
    (*count)++;
}
void delete_CQ(int CQ[max], int *front, int *count)
{
    int ele;
    if(*count==0)
    {
        printf("There are no elements to be deleted");
        return;
    }
    ele= CQ[*front];
    *front= ((*front)+1) % max;
    (*count)--;
    printf("Element deleted is: %d",ele);
}
void display(int CQ[max],int front, int count)
{
    int i;
    if(count==0)
    {
        printf("Circular Queue is empty");
        return;
    }
    for(i=0;i<count;i++)
    {
        printf("%d\t",CQ[front]);
        front=(front+1) % max;
    }
}
int main()
{
    int CQ[max],rear=max-1, front =0, count=0,ch;
    while(1)
    {
        printf("\nEnter the choice:\n 1.Insert element\n 2.Delete element \n 3.Display\n 4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insert_CQ(CQ,&rear,&count);
            break;
            case 2:
            delete_CQ(CQ,&front,&count);
            break;
            case 3:
            display(CQ,front,count);
            break;
            default:
            exit(0);
        }
    }
}