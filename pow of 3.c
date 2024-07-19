#include<stdio.h>

int main()
{
    int i,n;
    int cube;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
            cube=pow(3,i);
            printf("%d ",cube);
    }
        
    return 0;
}