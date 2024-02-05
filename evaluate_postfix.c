/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#define max 5
int compute(int op1, char op, int op2)
{
    switch(op)
    {
        case '+':return(op1+op2);
        break;
        case '-':return (op1-op2);
        break;
        case '*':return(op1*op2);
        break;
        case '/':return(op1/op2);
        break;
        case '%':return(op1%op2);
        break;
        case '$':
        case '^':return (pow(op1,op2));
        break;
    }
}

int push(int s[max],int *top, int symbol)
{
    (*top)++;
    s[*top]=symbol;
}
int pop(int s[max], int *top)
{
    char symbol;
    symbol=s[*top];
    (*top)--;
    return symbol;
}
int main()
{
    int i,op1,op2,res;
    int s[max],top=-1;
    char postfix[100],symbol;
    printf("Enter the postfix expression:");
    scanf("%s",postfix);
    for(i=0;postfix[i]!='\0';i++)
    {
        symbol=postfix[i];
        if(isdigit(symbol))
        {
            push(s,&top,symbol-'0');
        }
        else
        {
            op2=pop(s,&top);
            op1=pop(s,&top);
            res=compute(op1,symbol,op2);
            push(s,&top,res);
        }
    }
    printf("Result:%d",pop(s,&top)); 
}
