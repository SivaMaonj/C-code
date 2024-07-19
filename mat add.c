#include<stdio.h>

int main()
{
    int n,m;
    printf("enter the size=");
    scanf("%d",&n);
    printf("enter the size=");
    scanf("%d",&m);
    int a[n][m],b[n][m];
    printf("enter the elements");
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%d",&a[i][j]);
    }
    }
    printf("enter the elements");
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%d",&b[i][j]);
    }
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        printf("%d    ",a[i][j]);
    }
    printf("\n");}
    printf("\n");
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        printf("%d    ",b[i][j]);
    }
    printf("\n");}
    
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        printf("%d    ",a[i][j]+b[i][j]);
    }
    printf("\n");}
    return 0;
}