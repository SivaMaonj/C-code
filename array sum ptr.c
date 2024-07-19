#include<stdio.h>
void sum(int *p,int n);
int main()
{
    int n,A[11];
    int *p=&A;
    printf("enter size=");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0;i<n;i++){
    scanf("%d", (p+i));
    }
    sum(p,n)   ;
    return 0; 
}
void sum(int *p,int n){
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum+=*(p+i);
    }
    printf("sum=%d",sum);
}