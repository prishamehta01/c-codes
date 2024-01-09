/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define s_size 3
struct student {
    char name[50];
    int id;
};
void push(struct student s[s_size], int *top)
{
    struct student ele;
    printf("Enter the name and id of the student to be inserted:\n");
    scanf("%s %d", ele.name, &ele.id);
    if((*top)==s_size-1)
    {
        printf("Overflow condition and insertion is not possible\n");
        return;
    }
    (*top)++;
    s[*top].id=ele.id;
    strcpy(s[*top].name,ele.name);
    
}
void pop(struct student s[s_size],int *top)
{
    struct student ele;
    if((*top)==-1)
    {
        printf("Underflow condition and deletion is not possible\n");
        return;
    }
    ele=s[*top];
    (*top)--;
    printf("Deleted student is :%s %d\n", ele.name, ele.id);
}
void display(struct student s[s_size],int top)
{
    int i;
    printf("Students in the stack are:\n");
    for(i=0;i<=top;i++)
        printf("%s %d\t", s[i].name, s[i].id);
}
int main()
{
    struct student s[s_size];
    int top=-1,ch;
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
