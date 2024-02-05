#include<stdio.h>
#include<stdlib.h>
int *insert_que(int *q,int *rear,int *ms)
{
    int ele;
    printf("Enter the element to be inserted:");
    scanf("%d",&ele);
    if(*rear==(*ms)-1)
    {
        *ms=(*ms)*2;
        q=(int *)realloc(q,sizeof(int)*(*ms));
    }
    (*rear)++;
    q[*rear]=ele;
    return q;
}
void delete_que(int *q,int *front,int rear)
{
    int ele;
    if(*front>rear)
    {
        printf("Queue is empty");
        return;
    }
    ele=q[*front];
    (*front)++;
    printf("Deleted element is:%d",ele);
}
void display(int *q,int front, int rear)
{
    int i;
    for(i=front;i<=rear;i++)
        printf("%d\t",q[i]);
}
int main()
{
    int *q, rear=-1, front=0, ms=3, ch;
    q=(int *)malloc(sizeof(int)*ms);
    for(;;)
    {
        printf("\nEnter the choice:\n 1.Insert()\n 2.Delete()\n 3.Display\n 4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insert_que(q,&rear,&ms);
            break;
            case 2:
            delete_que(q,&front,rear);
            break;
            case 3:
            display(q,front,rear);
            break;
            default:
            exit(0);
    }
}
}