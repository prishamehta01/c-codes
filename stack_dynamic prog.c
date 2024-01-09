/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int *push(int *s, int *top,int *ms)
{
    int ele;
    printf("Enter the element to be inserted:\n");
    scanf("%d",&ele);
    if((*top)==(*ms)-1)
    {
        *ms=(*ms)*2;
        s=(int *)realloc(s,sizeof(int)*(*ms));
    }
    (*top)++;
    s[*top]=ele;
    return s;
}
void pop(int *s,int *top)
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
void display(int *s,int top)
{
    int i;
    printf("ELements of stack are:\n");
    for(i=0;i<=top;i++)
        printf("%d\t",s[i]);
}
int main()
{
    int *s,max_size=3,top=-1,ch;
    s=(int*)malloc(sizeof(int)*max_size);
    for(;;)
    {
        printf("\nEnter the choice:\n 1.Push()\n 2.Pop()\n 3.Display\n 4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push(s,&top,&max_size);
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
    


//The code is a C program for stack operations using arrays. A stack is a linear data structure that follows the principle of “Last In, First Out” (LIFO). You can perform the following operations on a stack:

push: Adds an element to the top of the stack.
pop: Removes the topmost element from the stack.
display: Shows the elements of the stack.
Your code implements these operations using functions and pointers. You also use dynamic memory allocation to resize the array when it is full. Your code takes the user’s choice as input and performs the corresponding operation until the user chooses to exit.

Let me explain each function in detail:

push: This function takes three parameters: a pointer to the stack array (s), a pointer to the top index (top), and a pointer to the maximum size of the array (ms). It asks the user to enter the element to be inserted and stores it in a variable (ele). It then checks if the stack is full by comparing the top index with the maximum size minus one. If the stack is full, it doubles the maximum size and reallocates the memory for the array using the realloc function. It then increments the top index and assigns the element to the stack array at that position.

pop: This function takes two parameters: a pointer to the stack array (s) and a pointer to the top index (top). It checks if the stack is empty by comparing the top index with -1. If the stack is empty, it prints a message and returns. Otherwise, it stores the element at the top of the stack in a variable (ele), decrements the top index, and prints the deleted element.

display: This function takes two parameters: a pointer to the stack array (s) and the top index (top). It checks if the stack is empty by comparing the top index with -1. If the stack is empty, it prints a message and returns. Otherwise, it prints the elements of the stack from the top to the bottom using a for loop.

main: This is the main function of the program. It declares four variables: a pointer to the stack array (s), the maximum size of the array (max_size), the top index (top), and the user’s choice (ch). It initializes the stack array with a size of 3 using the malloc function and sets the top index to -1. It then enters an infinite loop and prints the menu of options for the user. It reads the user’s choice and calls the corresponding function using a switch statement. If the user enters 4, it exits the program using the exit function.
    

