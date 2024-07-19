#include <stdio.h>  
   
int main() {  
    int counter, N,odd=0;   
    printf("Enter a Positive Number\n");  
    scanf("%d", &N);  
      int i = 1;
    while(i<= N) {  
        printf("%d \n", i);  
        i++;
    } 
    
    
    if(i/2!=0){
    
    odd++;}
    
    
    printf("%d",odd);
    
    return 0;  
} 