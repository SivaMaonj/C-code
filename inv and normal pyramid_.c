#include<stdio.h>
//only change the limit of i for get invert or normal pyramid 
int main()
{
    int n,i,j,k;
    printf("enter the limit");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {    for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
         
        for(k=1;k<=2*i-1;k++)
        {
       printf("x");
    }
    printf("\n");
   }
    return 0;
}