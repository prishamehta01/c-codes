/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#define s_size 3
void push(int s[s_size], int *top)
{
    int ele;
    printf("Enter the element to be inserted:\n");
    scanf("%d",&ele);
    if((*top)==s_size-1)
    {
        printf("Overflow condition and insertion is not possible\n");
        return;
    }
    (*top)++;
    s[*top]=ele;
    
}
void pop(int s[s_size],int *top)
{
    int ele;
    if((*top)==-1)
    {
        printf("Underflow condition and deletion is not possible\n");
        return;
    }
    ele=s[*top];
    (*top)--;
    printf("Deleted element is :%d\n",ele);
}
void display(int s[s_size],int top)
{
    int i;
    printf("ELements of stack are:\n");
    for(i=0;i<=top;i++)
        printf("%d\t",s[i]);
}
int main()
{
    int s[s_size],top=-1,ch;
    for(;;)
    {
        printf("\nEnter the choice:\n 1.Push()\n 2.Pop()\n 3.Display\n 4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push(s,&top);
            break;
            case 2:
            pop(s,&top);
            break;
            case 3:
            display(s,top);
            break;
            default:
            exit(0);
            
        }
    }
    
    
}