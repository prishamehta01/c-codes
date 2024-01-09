/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,rev=0,a;
    printf("Enter the number to check if palindrome");
    scanf("%d",&num);
    a=num;
    while(num!=0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    printf("The reverse of number is:%d\n",rev);
    if(a==rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}
