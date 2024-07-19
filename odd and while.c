#include <stdio.h>  
   
int main() {  
    int counter, N,odd=0;   
    printf("Enter a Positive Number\n");  
    scanf("%d", &N);  
      int i = 1;
    while(i<= N) {  
        printf("%d ", i);  
        i++;
    } 
    printf("\n");
    
    for(i=0;i<=N;i++){
    if(i%2!=0)
    odd++;
    }
    
    printf("%d\n",odd);
    
    return 0;  
} 