#include<stdio.h>

int main()
{
    int A[5],n
    ;
    printf("enter size");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0;i<n;i++)
        {
        scanf("%d",&A[i]);
        
        }
        for(int i=0;i<n;i++)
        {    int flag=0;
            for(int j=2;j<A[i]/2;j++)
            {
            if(A[i]%2==0)
            {
                flag=1;
                break;
            }
            
            }
        if(flag==0)
        { printf("%d\t",A[i]); }
        }
    return 0;
}