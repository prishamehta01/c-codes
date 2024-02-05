/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define q_size 3
typedef struct stud
{
    char name[20];
    int id;
}Q;
void ins_que(Q q[q_size],int *rear)
{                                                   //insertion happens through rear
    Q ele;
    printf("Enter the element to be inserted:");
    scanf("%s %d",ele.name,&ele.id);
    if(*rear==q_size-1)
    {
        printf("Insertion not possible");
        return;                                       //default value of rear=-1
    }
    (*rear)++;
    q[*rear].id=ele.id;
    strcpy(q[*rear].name,ele.name);
}
void del_que(Q q[q_size],int *front,int rear)       //deletion happens through front=0
{
    Q ele;
    if(*front>rear)
    {
        printf("Deletion not possible,queue is empty");
        return;
    }
    ele=q[*front];
    (*front)++;
    printf("Deleted element is %s %d",ele.name,ele.id);
    
}
void display(Q q[q_size],int rear,int front)
{
    int i;
    if(front>rear)
        printf("Queue is empty");
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\t%s\n",q[i].id,q[i].name);
        }
    }
}
int main()
{
    Q q[q_size];
    int front=0,rear=-1,ch;
    for(;;)
    {
        printf("\n Enter you choice:\n 1.Inserting element into queue\n 2.Delete the element from queue \n 3.Display\n 4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            ins_que(q,&rear);
            break;
            case 2:
            del_que(q,&front,rear);
            break;
            case 3:
            display(q,rear,front);
            break;
            default:
            exit(0);
        }
}
}