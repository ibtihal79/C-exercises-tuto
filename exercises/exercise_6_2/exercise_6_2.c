#include <stdio.h>

int main() {

   int n;
   int factorial = 1;

   printf("Enter an integer: ");
   scanf("%d", &n);

   int i;
   for (i = 1; i <= n; i++) {
      factorial = factorial * i;                         
   }

   printf("The factorial of %d is %d\n", n, factorial);

   return 0;

}
