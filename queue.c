/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
                                                    //FIFO
#include <stdio.h>
#include<stdlib.h>
#define q_size 3
void ins_que(int q[q_size],int *rear)
{                                                   //insertion happens through rear
    int ele;
    printf("Enter the element to be inserted:");
    scanf("%d",&ele);
    if(*rear==q_size-1)
    {
        printf("Insertion not possible");
        return;                                       //default value of rear=-1
    }
    (*rear)++;
    q[*rear]=ele;
}
void del_que(int q[q_size],int *front,int rear)       //deletion happens through front=0
{
    int ele;
    if(*front>rear)
    {
        printf("Deletion not possible,queue is empty");
        return;
    }
    ele=q[*front];
    (*front)++;
    printf("Deleted element is %d",ele);
    
}
void display(int q[q_size],int rear,int front)
{
    int i;
    if(front>rear)
        printf("Queue is empty");
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",q[i]);
        }
    }
}
int main()
{
    int q[q_size],front=0,rear=-1,ch;
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