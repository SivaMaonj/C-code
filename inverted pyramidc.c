#include<stdio.h>

int main()
{
   int i,j,n;
   printf("enter the value");
    scanf("%d",&n); 
    for(i=1;i<=5;i++){ 
    for(j=5;j>=i;j--){
    printf("*");}
     
    printf("\n");
}
return 0;
}