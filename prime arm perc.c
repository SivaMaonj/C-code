#include<stdio.h>
void perfect(int n);
void Armstrong (int n);
void prime(int n);

int main()
{
    int arm=0,n,temp,r;
    printf("enter the number");
    scanf("%d",&n);
    Armstrong ( n) ;
    perfect(n);
    prime(n);
    return 0;
}
void Armstrong (int n) {
    int  temp=n,r,arm=0;
    while(n>0)
    {
        r=n%10;
        arm=arm+(r*r*r);
        n=n/10;
    }
    if(temp==arm) printf("%d is Armstrong number\n",arm);
    else printf("not an Armstrong\n");
}
void perfect(int n)
{
    int i=1,sum=0;
    while(n<i)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
        printf("%d is a perfect number\n",sum);
    else
        printf("not a perfect number\n");
}
void prime(int n)
    {
        int sum=0,i;
    int found=0;
    for(i=2;i<=n;i++)
    {
        if(n%i!=0)
        {
            found =1;
        }   
    }
    if(found =1)
    printf("%d is a prime number\n",n);
    else
    printf("%d is not a prime number",n);
    
    
    
    }