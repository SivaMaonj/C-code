#include<stdio.h>

int main()
{
    int A[4][5],m,n;
    int *p=A;
    printf("enter the size of row and column");
    scanf("%d %d",&n,&m);
    printf("enter elements");
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%d",(*(A+i)+j));
        }}
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    printf("%d\t",*(*(A+i)+j));
    
    }printf("\n");
    }
            return 0;
}