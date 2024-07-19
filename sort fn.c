#include<stdio.h>
void sort(int A[],int n);

int main()
{
    int n,i,A[20];
    printf("enter size");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=1;i<n;i++)
        {
            scanf("%d",&A[i]);
        
        }
        sort(A,n);
        printf("sorted array\n");
        for(int i=1;i<n;i++)
        {    printf(" %d\n",A[i+1]);
        }
        
    return 0;}
        
void sort(int A[],int n)
        {

        int temp;
        for(int i=1;i<n;i++)
        {    for(int j=1;j<n;j++)
            {    if(A[j]>A[j+1])
                {    temp=A[j];
                     A[j]=A[j+1];
                     A[j+1]=temp;
                }
           
            }
        
     }
    }