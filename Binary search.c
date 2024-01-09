/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,a[10],ele,found=0;
    printf("enter the number of ele");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter ele to be search");
    scanf("%d",&ele);
   int beg=0,end=n-1;
    while(beg<=end){
        int mid=(beg+end)/2;
        if(a[mid]==ele){
            found=1;
            printf("elelment found at %d",mid+1);
            break;
        }
        if(a[mid]>ele)
        end=mid-1;
        else
        beg=mid+1;
        }
        if(beg>end && found==0)
        {
            printf("element not found");
        }
    }
