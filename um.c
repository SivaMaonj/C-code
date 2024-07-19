#include <stdio.h>

int main() {

    int A[10],n;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=1;i<n;i++)
    {    scanf("%d",&A[i]);
    }
  int i; int flag = 0;
  

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  
  for (i = 2; i <= A[i]/2 ; i++) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (A[i] % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.", A[i]);
  else
    printf("%d is not a prime number.", A[i]);

  return 0;
}