#include<stdio.h>
void add(int a,int b){
    int sum=a+b;
    printf("sum=%d",sum);
    }
int main()
{ 
int a;
printf("enter the 1st num:");
scanf("%d",&a);
int b;
printf("enter the 2nd num:");
scanf("%d",&b);
 add(a,b);

return 0;
}