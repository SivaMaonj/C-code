#include<stdio.h>
void sum(int a,int b);
void diff(int a,intb);

int main()
{    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    sum(a,b);
    diff(a,b);
    return 0;
}
void sum(int a,int b){
int sum;
sum= a+b;
printf("sum=%d\n",sum);

}
void diff(int a,int b){
int diff;
diff=a-b;
printf("diff=%d",diff);}