#include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }
    int large =arr[100];
  for (int i = 1; i < n; ++i) {
    if (large < arr[i]) {
      large = arr[i];
    }
  }

  printf("Largest element = %.2lf", large);

  return 0;
}
