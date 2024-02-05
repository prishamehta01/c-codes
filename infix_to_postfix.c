/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define max 40
int F(char symbol)
{
    switch(symbol)
    {
        case '+':
        case '-':return 2;
        break;
        case '*':
        case '/':
        case '%':return 4;
        break;
        case '$':
        case '^':return 5;
        break;
        case '(':return 0;
        break;
        case '#':return -1;
        break;
        default:
        return 8;
    }
}
int G(char symbol)
{
    switch(symbol)
    {
        case '+':
        case '-':return 1;
        break;
        case '*':
        case '/':
        case '%':return 3;
        break;
        case '$':
        case '^':return 6;
        break;
        case '(':return 9;
        break;
        case ')':return 0;
        break;
        default:
        return 7; 
    }
}
void push(char s[max],int *top, char symbol)
{
    (*top)++;
    s[*top]=symbol;
}
char pop(char s[max], int *top)
{
    char symbol;
    symbol=s[*top];
    (*top)--;
    return symbol;
}
void convert2postfix(char infix[100])
{
  char s[max],postfix[100],symbol;
  int top=-1,i,j=0;
  push(s,&top,'#');
  for(i=0;infix[i]!='\0';i++)
  {
      symbol=infix[i];
      while(F(s[top])>G(symbol))
      {
          postfix[j]=pop(s,&top);
          j++;
      }
      if(F(s[top])!=G(symbol))
      {
          push(s,&top,symbol);
      }
      else
      {
          top--;
      }
  }
      while(s[top]!='#')
      {
          postfix[j]=pop(s,&top);
          j++;
      }
        postfix[j]='\0';
        printf("%s",postfix);
}
int main()
{
    char infix[100];
    printf("Enter infix");
    scanf("%s",infix);
    convert2postfix(infix);
}
