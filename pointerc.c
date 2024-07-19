#include<stdio.h>
int main()
{
    int A[]={4,6,8,9,54};
    int *p;
     p=&A;
    
    for(int i=0;i<5;i++)
    {    printf("%d ",*(p+i));
    }
    return 0;
}
