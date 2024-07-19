#include<stdio.h>


int main()
{
    int a[10];
    int p=0;
    int n=0;
    int z=0;
   
    printf("enter the number");
    for(int i=1; i<=10; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=10;i++)
    {
        if(a[i]>0)
        p++;
       else if(a[i]<0)
        n++;
        else{
        z++ ;}
    }
    printf("positive=%d, negative=%d,zero%d",p,n,z);

    return 0;
}