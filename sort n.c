#include<stdio.h>

int main()
{
    int arr[100];
    int i,j,n;
    printf("enter the size ");
    scanf("%d",&n);
    printf("enter the elements");
         for(i=0;i<n;i ++)
        {
            scanf("%d\n",&arr[i]);
        }
        int temp;
        
        for(i=0;i<n;i++)
        {
           for(j=0;j<n;j++)
       { 
        if(arr[j]<arr[j+1])
       {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
        }
        for(j=0;j<n;j++)
       {
            printf("%d",arr[j ]);
        }
    return 0;
}