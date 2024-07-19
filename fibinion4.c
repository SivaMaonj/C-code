#include<stdio.h>

int main()
{
    int a=0,b=1,c,i,n;
    printf("enter the limit =");
    scanf("%d",&n);
    while(i<=n)
    { printf("%d",a);
       c=a+b;
        a=b;
        b=c; 
        i++;
    
    }
    
    return 0;
}