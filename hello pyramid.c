#include<stdio.h>

int main()
{
    int i,j,n;
    
   char a[]={'H','E','L','L','O'};
    for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
            printf("%c",a[j-1]);
    }
    printf("\n");
    }
    return 0;
}