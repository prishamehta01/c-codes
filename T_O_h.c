/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void TOH (int n, char s, char t, char d)
{
    if(n==0)
    {
        return;
    }
    TOH(n-1,s,d,t);
    printf("Move disc %d from %c to %c\n",n,s,d);
    TOH(n-1,t,s,d);
}
int main ()
{
    int n; // the number of disks
    char s, t, d; // the source, temporary, and destination rods
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    s = 'A'; // assign 'A' to the source rod
    t = 'B'; // assign 'B' to the temporary rod
    d = 'C'; // assign 'C' to the destination rod
    TOH (n, s, t, d); // call the TOH function
    return 0;
}
