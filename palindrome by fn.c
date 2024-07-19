#include<stdio.h>
void palindrome(int n);
int main()
{
    int sum=0,r,i,n;
    printf("enter the limit =");
    scanf("%d",&n);
    palindrome(n);
    return 0;
    }
    
    void palindrome(int n){
    int temp=n;
    int r,sum;
    
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
    
    }
