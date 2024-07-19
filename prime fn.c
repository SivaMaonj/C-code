#include<stdio.h>
void prime(int A[],int n);

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
        prime(A,n);
        return 0; 
        }
        void prime(int A[],int n){
        for(int i=0;i<n;i++)
        {    int flag=0;
            for(int j=2;j<A[i];j++)
            {
            if(A[i]%j==0)
            {
                flag=1;
                break;
            }
            
            }
        if(flag==0)
        { printf("%d\t",A[i]); }
        }
   
}