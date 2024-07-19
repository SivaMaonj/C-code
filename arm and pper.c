#include<stdio.h>
void perfect(int n);
void arm(int n);

int main()
{
   int arm=0,n,temp,r;
        printf("enter the number");
        scanf("%d",&n);
       
        temp=n;
        while(n>0)
        {
            r=n%10;
            arm=arm+(r*r*r);
            n=n/10;
        }
       if(temp==arm) printf("%d is Armstrong number",arm);
        else printf("not an Armstrong");
        
       void 
        int i=1,sum=0;
        while(n<i)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==n) 
         printf("%d is a perfect number",sum);
        else
        printf("not a perfect number");
    return 0;
}