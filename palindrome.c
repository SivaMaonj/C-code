#include<stdio.h>

int main()
{
    int sum=0,r,i,n;
    printf("enter the limit =");
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    { r=n%10;
        sum=(sum*10)+r;
        n=n/10;
        
    }
    if(temp==sum)
    { printf("palindrome");
    }
    else{    printf("note a palindrome");
    }
    
    return 0;
}