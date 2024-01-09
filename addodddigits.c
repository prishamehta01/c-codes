/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,sum=0,digit=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;
        num=num/10;
        if(digit%2!=0)
            sum=sum+digit;
    }
    printf("The sum of digits of number is:%d\n",sum);
    return 0;
}
