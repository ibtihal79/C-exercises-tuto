#include <stdio.h>

int main() {

   int n;

   printf("Enter an integer: ");
   scanf("%d", &n);

   if (n % 2 == 0) {
      printf("Number %d is odd.", n);
   } else {
      printf("Number %d is even.", n);
   }

   return 0;

}
